## C \_printf

That is the prototype for this implementation(_printf). As you can see, this prototype is an implementation of the **printf standard function** and **variadic function** . ## What is printf? "Writes the C string pointed by \_format_ to the standard output ([stdout](http://www.cplusplus.com/stdout))" - [cplusplus](http://www.cplusplus.com/reference/cstdio/printf/)

In other words, the function receives a format (_const char_ \*_format_) and a list of arguments (the magic of variadic functions). So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern

### Patterns

![enter image description here](https://i.imgur.com/vmU0FhC.png)
[cplusplus](http://www.cplusplus.com/reference/cstdio/printf)

That image shows specifiers that we can use in the printf. In this case, \_printf just allow specifiers like  
|Specifiers|Functions|Description|
|--|--|--|
|s|print_string|print a string|
|c|print_char|print just a char|
|i|print_integer|print a number in base 10|
|d|print_integer|print a number in base 10|
|p|print_pointer|print a memory address in base 16 lowercase|
|b|print_binary|print a number in base 2|
|x|print_hexadecimal_low|print a number in base 16 lowercase|
|X|print_hexadecimal_upp|print a number in base 16 uppercase|
|o|print_octal|print a number in base 8|
|R|print_rot|print a string encoded in rot13 format|

### Compilation:

All files will be compiled with gcc 4.8.4 using the flags: -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:

[Betty style documentation](https://github.com/holbertonschool/Betty/wiki)

### Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)
- \_putchar(char c)

## Function prototypes

All function prototypes used to compile \_printf() are included in the header file **main.h**:

- int \_printf(const char \*format, ...);
- int print_char(va_list args);
- int print_string(va_list args);
- int print_perc(va_list args);
- int print(const char \*format, va_list args);
- int get_print_function(const char c, va_list args);
- int print_d(va_list args);
- int print_i(va_list args);
- int print_b(va_list args);
- int print_u(va_list args);

## File description

- **\_printf.c:** - contains the function \_printf()
- **man_3_printf:** - manual page for \_printf() function.
- **get_functions.c** - contains the function get_func()
- **print_functions.c** - contains the functions print_char, print_str and print_pct for the case of printing character, string and '%'
- **main.h** - contains all headers, prototypes and structure declaration
- **print.h** - switch between different letter format implemented in different functions

## Function description

**int \_printf(const char \*format, ...)**

This function produces output under the control of a _format string_ that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

The **format string** is composed of zero or more directives:

1. Ordinary characters that are copied unchanged to the output stream. (except %)
2. Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).

The **conversion specifier:**

The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion specifiers:

**d:** decimal number to be provided for printing.

**i:** integer to be provided for printing

**c:** character to be provided for printing

**s:** ...The const char \* argument is expected to be a pointer to an array of character type (pointer to a string).

**%:** A per cent sign '%' is written. No argument is converted.

**Return value:**

Upon success, \_printfs return the number of characters printed (excluding the null byte used to end output to strings)
A negative 1 is returned if an output error is encountered.

## Examples

| Specifiers | code line                                            | Output             |
| ---------- | ---------------------------------------------------- | ------------------ |
| **d**      | \_printf("Negative:[%d]\n", -762534);print a string; | Negative:[-762534] |
| **c**      | \_printf("Character:[%c]\n", 'H')                    | Character:[H]      |
| **s**      | \_printf("Actual : %s\n", "holberton")               | Actual : holberton |

## Authors

- [Wael Abidi](https://github.com/Mahdi3Bani)
- [Thameur Chaouch](https://github.com/MedAliKrifa)
