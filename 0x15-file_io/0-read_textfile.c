#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: byte_num- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *charactres;
	ssize_t readFile;
	ssize_t byte_num;
	ssize_t t;

	readFile = open(filename, O_RDONLY);
	if (readFile == -1)
		return (0);
	charactres = malloc(sizeof(char) * letters);
	t = read(readFile, charactres, letters);
	byte_num = write(STDOUT_FILENO, charactres, t);

	free(charactres);
	close(readFile);
	return (byte_num);
}
