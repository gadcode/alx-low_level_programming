# ALX Low Level Progamming

This repo contains all the demanding problems solved in the ALX low level programming stage of challenge.

You want to know more about ALX, right!? The [ALX Software Engineering program](https://www.alxafrica.com/) is solely pioneered and sponsored by the African Leadership Group (ALG). It would interest you to know that African Leadership Xtra (ALX) is a sister to the renowned [African Leadership University (ALU)](https://www.alueducation.com/) domiciled at Rwanda and Mauritius.

Wait, could we get back to business, please!? Thank you.

----------------------

## Description

Massive respect to ***Dennis M. Ritchie (@dmr)***, the founder of C computer programming language. Dennis Ritchie achieved this excellence between 1969-1972 while working at Bell Laboratories. C is a low-level language oriented to the implementation of operating systems (Unix), compilers and software development. It is useful, versatile, breathtakingly powerful and complex. With  that said, you would agree with me that it can be used in any operating system or hardware (for embedded software engineering).

## File Compilation and Execution

To successfully compile a C file, it is vital to add all the .c files involved in the program (functions, signature files, etc). You can compile the program(s) with the `gcc` command. Options used with the command are: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

**To Compile File(s):**
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 name_of_file.c -o name_of_executable`

**To Execute The Compiled File:**
`./name_of_executable`

## Projects/Contained Files

| Project | Files |
| :-- | :-- |
|**[0x00-hello_world](https://github.com/gadcode/alx-low_level_programming/tree/master/0x00-hello_world)**|0-preprocessor, 1-compiler, 2-assembler, 3-name, 4-puts.c, 5-printf.c, 6-size.c, 100-intel.c, 101-quote.c, main.c, README.md, size32, size64.|
|**[0x01-variables_if_else_while](https://github.com/gadcode/alx-low_level_programming/tree/master/0x01-variables_if_else_while)**|0-positive_or_negative.c, 1-last_digit.c, 2-print_alphabet.c, 3-print_alphabets.c, 4-print_alphabt.c, 5-print_numbers.c, 6-print_numberz.c, 7-print_tebahpla.c, 8-print_base16.c, 9-print_comb.c, 100-print_comb3.c, 101-print_comb4.c, 102-print_comb5.c, README.md.|
|**[0x02-functions_nested_loops](https://github.com/gadcode/alx-low_level_programming/tree/master/0x02-functions_nested_loops)**|_putchar.c, 0-putchar.c, 1-alphabet.c, 2-print_alphabet_x10.c, 3-islower.c, 4-isalpha.c, 5-sign.c, 6-abs.c, 7-print_last_digit.c, 8-24_hours.c, 9-times_table.c, 10-add.c, 11-print_to_98.c, 100-times_table.c, main.h, README.md.|
|**[0x03-debugging](https://github.com/gadcode/alx-low_level_programming/tree/master/0x03-debugging)**|0-main.c, 1-main.c, 2-largest_number.c, 3-print_remaining_days.c, main.h, README.md.|
|**[0x04-more_functions_nested_loops](https://github.com/gadcode/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)**|_putchar.c, 0-isupper.c, 1-isdigit.c, 2-mul.c, 3-print_numbers.c, 4-print_most_numbers.c, 5-more_numbers.c, 6-print_line.c, 7-print_diagonal.c, 8-print_square.c, 8-print_square.c, 9-fizz_buzz.c, 10-print_triangle.c, 100-prime_factor.c, main.c, main.h, README.md.|
|**[0x05-pointers_arrays_strings](https://github.com/gadcode/alx-low_level_programming/tree/master/0x05-pointers_arrays_strings)**|0-reset_to_98.c, 1-swap.c, 2-strlen.c, 3-puts.c, 4-print_rev.c, 5-rev_string.c, 6-puts2.c, 7-puts_half.c, 8-print_array.c, 9-strcpy.c, 100-atoi.c, 101-keygen.c, main.h, README.md|
|**[0x06-pointers_arrays_strings](https://github.com/gadcode/alx-low_level_programming/tree/master/0x06-pointers_arrays_strings)**|0-strcat.c, 1-strncat.c, 2-strncpy.c, 3-strcmp.c, 4-rev_array.c, 5-string_toupper.c, 6-cap_string.c, 7-leet.c, 100-rot13.c, main.h, README.md|
|**[0x07-pointers_arrays_strings](https://github.com/gadcode/alx-low_level_programming/tree/master/0x07-pointers_arrays_strings)**|0-memset.c, 1-memcpy.c, 2-strchr.c, main.h, README.md|
|**[0x08-recursion](https://github.com/gadcode/alx-low_level_programming/tree/master/0x08-recursion)**|0-puts_recursion.c, 1-print_rev_recursion.c, 2-strlen_recursion.c, 3-factorial.c, 4-pow_recursion.c, 5-sqrt_recursion.c, 6-is_prime_number.c, 100-is_palindrome.c, 101-wildcmp.c, main.h, README.md|
|**[0x09-static_libraries](https://github.com/gadcode/alx-low_level_programming/tree/master/0x09-static_libraries "0x09-static_libraries")**|_putchar.c, _putchar.o, 0-isupper.c, 0-isupper.o, 0-memset.c, 0-memset.o, 0-strcat.c, 0-strcat.o, 1-isdigit.c, 1-isdigit.o, 1-memcpy, 1-memcpy.o, 1-strncat.c, 1-strncat.o, 2-strchr.c, 2-strchr.o, 2-strlen.c, 2-strlen.o, 2-strncpy.c, 2-strncpy.o, 3-islower.c, 3-islower.o, 3-puts.c, 3-puts.o, 3-strcmp.c, 3-strcmp.o, 3-strspn.c, 3-strspn.o, 4-isalpha.c, 4-isalpha.o, 4-strpbrk.c, 4-strpbrk.o, 5-strstr.c, 5-strstr.o, 6-abs.c, 6-abs.o, 9-strcpy.c, 9-strcpy.o, 100-atoi.c, 100-atoi.o, create_static_lib.sh, liball.a, libmy.a, main.h, README.md|
|                       |                       |
