*This activity has been created as part of the 42 curriculum by hhailat.*

# libft

## Description

`libft` is a personal re-implementation of a subset of the C standard
library, plus a few extra utility and linked-list functions. It's the first
42 project, meant to build a solid, reusable toolbox in C and to make sure
the basics (strings, memory, linked lists) are fully understood.

## Instructions

```bash
make        # builds libft.a
make clean  # removes .o files
make fclean # removes .o files and libft.a
make re     # rebuilds everything
```

To use it in another project:

```bash
cc your_files.c -Lpath/to/libft -lft -Ipath/to/libft
```

Include `libft.h` in any file that uses one of its functions.

## Library content

- **Libc-style functions**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
  `ft_isascii`, `ft_isprint`, `ft_strlen`, `ft_memset`, `ft_bzero`,
  `ft_memcpy`, `ft_memmove`, `ft_strlcpy`, `ft_strlcat`, `ft_toupper`,
  `ft_tolower`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_memchr`,
  `ft_memcmp`, `ft_strnstr`, `ft_atoi`, `ft_calloc`, `ft_strdup` — reproduce
  the behavior of their standard `libc` counterparts.
- **Additional functions**: `ft_substr`, `ft_strjoin`, `ft_strtrim`,
  `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`,
  `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` — common string/output
  helpers not found in the standard library.
- **Linked-list functions**: `ft_lstnew`, `ft_lstadd_front`,
  `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`,
  `ft_lstclear`, `ft_lstiter`, `ft_lstmap` — a small singly linked-list
  toolkit based on the `t_list` structure.

All prototypes are declared in `libft.h`.

## Resources

- Linux man pages (`man strlen`, `man memcpy`, `man atoi`...)
- [So much YouTube vedios so that I cant metion it](https://youtube.com)
- 42 `libft` subject PDF

**AI usage**: an AI assistant (Claude) was used only to check written code
for bugs and edge-case errors (e.g. `NULL` inputs, size `0`). It was not used
to write the function logic, which was implemented manually.In addetion writting this README file.
