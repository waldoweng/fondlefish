#include <string.h>
#include <stdio.h>
#include "interpreter.h"
#include "util.h"


A_stm A_CompoundStm(A_stm stm1, A_stm stm2) {
    A_stm s = check_malloc(sizeof(*s));
    s->kind = A_compoundStm;
    s->u.compound.stm1 = stm1;
    s->u.compound.stm2 = stm2;
    return s;
}

A_stm A_AssignStm(string id, A_exp exp) {
    A_stm s = check_malloc(sizeof(*s));
    s->kind = A_assignStm;
    s->u.assign.id = id;
    s->u.assign.exp = exp;
    return s;
}

A_stm A_PrintStm(A_expList exps) {
    A_stm s = check_malloc(sizeof(*s));
    s->kind = A_printStm;
    s->u.print.exps = exps;
    return s;
}

A_exp A_IdExp(string id) {
    A_exp e = check_malloc(sizeof(*e));
    e->kind = A_idExp;
    e->u.id = id;
    return e;
}

A_exp A_NumExp(int num) {
    A_exp e = check_malloc(sizeof(*e));
    e->kind = A_numExp;
    e->u.num = num;
    return e;
}

A_exp A_OpExp(A_exp left, A_binop oper, A_exp right) {
    A_exp e = check_malloc(sizeof(*e));
    e->kind = A_opExp;
    e->u.op.left = left;
    e->u.op.right = right;
    e->u.op.oper = oper;
    return e;
}

A_exp A_EseqExp(A_stm stm, A_exp exp) {
    A_exp e = check_malloc(sizeof(*e));
    e->kind = A_eseqExp;
    e->u.eseq.stm = stm;
    e->u.eseq.exp = exp;
    return e;
}

A_expList A_PairExpList(A_exp head, A_expList tail) {
    A_expList el = check_malloc(sizeof(*el));
    el->kind = A_pairExpList;
    el->u.pair.head = head;
    el->u.pair.tail = tail;
    return el;
}

A_expList A_LastExpList(A_exp last) {
    A_expList el = check_malloc(sizeof(*el));
    el->kind = A_lastExpList;
    el->u.last = last;
    return el;
}

int maxargsExpList(A_expList expl, int c);
int maxargsExp(A_exp exp);
int maxargs(A_stm prog);


int maxargsExpList(A_expList expl, int c) {
    if (!expl)
        return 0;
    if (expl->kind == A_pairExpList) {
        int max1 = maxargsExp(expl->u.pair.head);
        int max2 = maxargsExpList(expl->u.pair.tail, c+1);
        return max1 > max2 ? max1 : max2;
    }
    else {
        int max1 = maxargsExp(expl->u.last);
        return c+1 > max1 ? c+1 : max1;
    }
}

int maxargsExp(A_exp exp) {
    if (exp->kind == A_idExp || exp->kind == A_numExp)
        return 0;
    else if (exp->kind == A_opExp) {
        int max1 = maxargsExp(exp->u.op.left);
        int max2 = maxargsExp(exp->u.op.right);
        return max1 > max2 ? max1 : max2;
    }
    else {
        int max1 = maxargs(exp->u.eseq.stm);
        int max2 = maxargsExp(exp->u.eseq.exp);
        return max1 > max2 ? max1 : max2;
    }
}

int maxargs(A_stm prog) {
    if (prog->kind == A_compoundStm) {
        int max1 = maxargs(prog->u.compound.stm1);
        int max2 = maxargs(prog->u.compound.stm2);
        return max1 > max2 ? max1 : max2;
    }
    else if (prog->kind == A_assignStm)
        return maxargsExp(prog->u.assign.exp);
    else
        return maxargsExpList(prog->u.print.exps, 0);
}

typedef struct table *Table_;
struct table {string id; int value; struct table *tail;};
struct IntAndTable {int i; Table_ t;};
Table_ interpStm(A_stm s, Table_ t);
struct IntAndTable interpExp(A_exp e, Table_ t);

Table_ Table(string id, int value, Table_ tail) {
    Table_ t = check_malloc(sizeof(*t));
    t->id = id;
    t->value = value;
    t->tail = tail;
    return t;
}

int lookup(Table_ t, string key) {
    while (t) {
        if (strcmp(key, t->id) == 0 && strlen(key) == strlen(t->id))
            return t->value;
        t = t->tail;
    }
    assert(t);
}

Table_ interpStm(A_stm s, Table_ t) {
    if (s->kind == A_compoundStm) {
        t = interpStm(s->u.compound.stm1, t);
        t = interpStm(s->u.compound.stm2, t);
    } else if (s->kind == A_assignStm) {
        struct IntAndTable r = interpExp(s->u.assign.exp, t);
        t = Table(s->u.assign.id, r.i, r.t);
    } else {
        A_expList explist = s->u.print.exps;
        while (explist->kind == A_pairExpList) {
            struct IntAndTable r = interpExp(explist->u.pair.head, t);
            explist = explist->u.pair.tail;
            t = r.t;
            printf("%d ", r.i);
        }
        struct IntAndTable r = interpExp(explist->u.last, t);
        t = r.t;
        printf("%d\n", r.i);
    }
    return t;
}


struct IntAndTable interpExp(A_exp e, Table_ t) {
    struct IntAndTable r;
    if (e->kind == A_idExp) {
        r.i = lookup(t, e->u.id);
        r.t = t;
    } else if (e->kind == A_numExp) {
        r.i = e->u.num;
        r.t = t;
    } else if (e->kind == A_opExp) {
        struct IntAndTable r_left = interpExp(e->u.op.left, t);
        struct IntAndTable r_right = interpExp(e->u.op.right, r_left.t);
        r.t = r_right.t;
        switch (e->u.op.oper) {
            case A_plus:
                r.i = r_left.i + r_right.i;
                break;
            case A_minus:
                r.i = r_left.i - r_right.i;
                break;
            case A_times:
                r.i = r_left.i * r_right.i;
                break;
            case A_div:
                r.i = r_left.i / r_right.i;
                break;
            default:
                assert(-1);
        }
    } else {
        t = interpStm(e->u.eseq.stm, t);
        r = interpExp(e->u.eseq.exp, t);
    }
    return r;
}


void interp(A_stm stm) {
    interpStm(stm, NULL);
    return ;
}