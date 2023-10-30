#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: name of the ffile
 * @letters: number of letters
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *start;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	start = malloc(sizeof(char) * letters);
	if (start == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, start, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(start);
		return (0);
	}
	lenw = write(STDOUT_FILENO, start, lenr);
	free(start);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
