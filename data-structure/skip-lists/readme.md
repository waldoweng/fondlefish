# simple skip-list implementation

This library is a very simple implementation of the classical data structure skip-list base on the essay "Skip Lists: A Probabilistic Alternative to Balanced Trees" by William Pugh. It's so simple that it should only be use in single-thread fasion, such as leetcode or online-judge competition occasion.

## Cautious

- thread-safe not support, only suitable for single-thread.
- key & value are int by default, may try modifing the macro KeyType & ValueType mannually.

## Future Enhancement

- atomicity improvement. try non-lock programing with __atomic_* apis provide by the compiler.
- move from c to cpp for templatize the key & value type.