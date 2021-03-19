#pragma once

#include <stdio.h>
#include <errno.h>

/* Print a greeting for the specified name into the specified
 * stream. On success, return the number of characters printed.
 * On failure, set errno and return a negative value.
 */
/*
inline int say_hello (FILE *f, const char *n) __attribute__((always_inline));
*/

/*extern inline int say_hello (FILE *f, const char *n) __attribute__((always_inline));*/

//extern int
//say_hello (FILE *, const char *name);

static inline int
say_hello (FILE *f, const char *n)
{
  if (f == NULL || n == NULL || *n == '\0')
  {
    errno = EINVAL;
    return -1;
  }

  return fprintf (f, "Hello, %s!\n", n);
}
