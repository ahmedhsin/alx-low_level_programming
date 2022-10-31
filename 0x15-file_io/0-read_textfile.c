#include "main.h"
/**
 * read_textfile - check the code
 * @filename: blablalba
 * @letters: blablalba
 * Return: void
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	int *buf;
	int total = 0;
	size_t x;

	if (letters <= 0)
		return (0);
	buf = malloc(letters);
	if (fd < 0)
		return (0);
	total = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, letters);
	if (x != letters || total < 0)
		return (0);
	close(fd);
	return (total);

}
