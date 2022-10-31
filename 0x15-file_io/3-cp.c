#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int from, to, r;
	char *buff = malloc(1024);

	if (!buff)
		return (0);
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(98);
	}
	
	from = open(av[1], O_RDONLY);
	to = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (from == -1)
	{
		close(to);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (to == -1)
	{
		close(from);
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	r = read(from, buff, 1024);
	if (write(to, buff, r) == -1)
	{
		close(from);
		close(to);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	
	if (close(from) == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (1);
}
