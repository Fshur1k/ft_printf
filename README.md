# ft_printf
This project has been created as part of the 42 curriculum by **ofedota**

## Description
This project implements the `printf` function from the standard library `stdio.h`

**The project has several requirements:**
- Don't implement the buffer management of the original `printf`.
- Function has to handle the following conversions: `cspdiuxX%`
- Function will be compared against the original `printf`
- Command `ar` must be used to create the library.
- Using the `libtool` command is forbidden.
- `libftprintf.a` has to be created at the root of the repository.

## Instructions:
To create library `libftprintf.a` you should use command: ```make```

To recompile library you can call: ```make re```

To delete all object files, use: ```make clean```
```make fclean``` : deletes `libftprintf.a`

To compile with file that contains test program you should compile with the following flags

```cc <your_test_file.c> -L. -lftprintf -o test```

```./test```

## Resources:
Project has file ``ft_printf.c`` that does main logic and additional files:

`ft_char.c`: Displays characters

`ft_base_10.c`: Displays digits in standart format

`ft_base_16.c`: Displays digits in hex format (base 16)

`Makefile` compile all files and linked them together in library `libftprintf.a`

