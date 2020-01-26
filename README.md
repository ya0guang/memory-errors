# memory-errors
Collect snippets of different type of memory errors.

## Dangling Pointers

- *fall_out_scope*: can't be detected by *--memory-safety*
- *array_bound*: using *--loop-limit*, smack can detect an error
- *array_bound2*: smack cannot detect an error. maybe because the array pointer is passed to another function field.
  But we can always use *assert* and *assume* to detect errors.
- *ninitialized*: smack works
- 