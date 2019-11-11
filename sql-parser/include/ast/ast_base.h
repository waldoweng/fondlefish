#ifndef FONDLE_FISH_MYSQL_AST_BASE_H_INCLUDED
#define FONDLE_FISH_MYSQL_AST_BASE_H_INCLUDED

class Ast_Base {
    public:
        explicit Ast_Base();
        virtual ~Ast_Base();

    public:
        int getID() const;
        virtual void illustrate() const = 0;

    private:
        int node_id;
    private:
        static int next_ast_id;
};

#endif
