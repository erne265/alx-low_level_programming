Project: C - Even more pointers, arrays and strings

#TASKS.

0. memset

Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);

1. memcpy

Write a function that copies memory area.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.

2. strchr

Write a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.

3. strspn

Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
4. strpbrk

Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);

5. strstr

Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are no

6. Chess is mental torture

Write a function that prints the chessboard.

Prototype: void print_chessboard(char (*a)[8]);

7. The line of life is a ragged diagonal between duty and desire

Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: void print_diagsums(int *a, int size);


8. Double pointer, double fun

Write a function that sets the value of a pointer to a char.

Prototype: void set_string(char **s, char *to);

9. My primary goal of hacking was the intellectual curiosity, the seduction of a

Create a file that contains the password for the crackme2 executable.
