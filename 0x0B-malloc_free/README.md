Reame file

PROJECT NAME : Memory allocation - 0x0B. C-malloc

MILESTONES: 
0. Write a function that creates an array of chars, and initializes it with a specific char.

Prototype: char *create_array(unsigned int size, char c);

1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. Write a function that concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);
The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
3. Write a function that returns a pointer to a 2 dimensional array of integers.

4.  Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

Prototype: void free_grid(int **grid, int height);

5.  Write a function that concatenates all the arguments of your program.

Prototype: char *argstostr(int ac, char **av);
Returns NULL if ac == 0 or av == NULL

6.  Write a function that splits a string into words.

Prototype: char **strtow(char *str);
The function returns a pointer to an array of strings (words)   
