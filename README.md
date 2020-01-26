# memory-errors
Collect snippets of different type of memory errors.

## Dangling Pointers

- *fall_out_scope*: can't be detected by *--memory-safety*
- *array_bound*: using *--loop-limit*, smack can detect an error
- *array_bound2*: smack cannot detect an error. maybe because the array pointer is passed to another function field
  But we can always use *assert* and *assume* to detect errors
- *ninitialized*: smack works
- *use_after_free*: smack works, and it proved to check *NULL* pointer


## Memory Leak

- *RAII*: smack works, but detected *invalid pointer dereference*. not sure it's the right answer

## Memory Overflow

- *strcpy_overflow*: smack cannot detect an error with *--memory-safety*. I believe it works just like in *array_bound2* which cannot detect unbound array access as well


## Reference

1. https://www.ibm.com/developerworks/cn/aix/library/au-toughgame/index.html
2. https://blog.csdn.net/c_base_jin/article/details/26149653
3. https://en.wikipedia.org/wiki/Memory_leak