# C - printf

**In this project, we'll learn to work collaboratively using GitHub to create a printf function.**

### We are allowed to use these functions or macros only:

---

* `write (man 2 write)` 
* `malloc (man 3 malloc)`
* `free (man 3 free)`
* `va_start (man 3 va_start)` 
* `va_end (man 3 va_end) `
* `va_copy (man 3 va_copy)` 
* `va_arg (man 3 va_arg)`

**Description**
:----
The `_printf()` function produces output according to a format which is described below. This function write its output to the stdout, the standard output. Returns the count of printed characters when the function is successful The available convertion specifiers are:

* %c: Prints a single character.
* %s: Prints a string of characters.
* %d: Prints integers.
* %i: Prints integers.
* %b: Prints the binary representation of an unsigned decimal.
* %u: Prints unsigned integers
* %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
* %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
* %r: Prints a reversed string

### Compilation

---

**Note**

* The code is compiles using: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

* You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`
