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
	int *buf = malloc(letters);
	int total = 0;

	if (fd < 0)
		return (0);
	total = read(fd, buf, letters);
	if (write(STDOUT_FILENO, buf, letters) != total || total < 0)
		return (0);
	return (total);

}
