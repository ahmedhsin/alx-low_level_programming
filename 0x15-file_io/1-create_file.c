#include "main.h"
/**
 * create_file - check the code
 * @filename: blablalba
 * @text_content: blablalba
 * Return: void
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_TRUNC);
	int state = 1;

	if (!filename)
		return (-1);

	if (fd < 0)
		fd = creat(filename, 0770);
	else
		state = -1;
	if (fd < 0)
		return (-1);
	if (write(fd, text_content, strlen(text_content)) < 0)
		return (-1);
	close(fd);
	return (state);
}
