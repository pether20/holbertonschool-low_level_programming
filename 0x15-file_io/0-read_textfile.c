#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read file pointer
 * @filename: pointer file
 * @letters: number od letters
 * Return: Return number of char
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wt;
	char *newfile;

	if (filename == NULL)
		return (0);
	op = open(filename, O_CREAT | O_RDONLY);
	if (op == -1)
		return (0);

	newfile = malloc(sizeof(char) * letters);

	if (newfile == NULL)
		return (0);

	rd = read(op, newfile, letters);

	if (rd == -1)
	{	free(newfile);
		return (0);
	}

	wt = write(STDOUT_FILENO, newfile, rd);
	if (wt == -1)
	{
		free(newfile);
		return (0);
	}
	free(newfile);
	close(op);
	return (wt);
}
