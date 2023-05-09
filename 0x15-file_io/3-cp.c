#include "main.h"

#include <stdio.h>

/**
 * check97 - checks the correct num of args
 * @argc: num pf args
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check98 - checks file_from exists and can be read
 * @check: checks true or false
 * @file: file name
 * @desc_from: file desc of file_from
 * @desc_to: file desc of file_to
 * Return: void
 */
void check98(ssize_t check, char *file, int desc_from, int desc_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (desc_from != -1)
			close(desc_from);
		if (desc_to != -1)
			close(desc_to);
		exit(98);
	}
}
/**
 * check99 - checks that file_to was created, can be written to
 * @check: checks true or false
 * @file: file name
 * @desc_from: file desc of file_from
 * @desc_to: file desc of file_to
 * Return: void
 */
void check99(ssize_t check, char *file, int desc_from, int desc_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (desc_from != -1)
			close(desc_from);
		if (desc_to != -1)
			close(desc_to);
		exit(99);
	}
}
/**
 * check100 - checks that file were closed properly
 * @check: checks true or false
 * @file: file name
 * @desc_from: file desc of file_from
 * @desc_to: file desc of file_to
 * Return: void
 */
void check100(ssize_t check, char *file, int desc_from, int desc_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: num of args passed
 * @argv: array of pointers to args
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int desc_from, desc_to, cl_to, cl_from;
	char buff[1024];
	ssize_t len_r, len_w;
	mode_t f;

	chack(97);
	desc_from = open(argv[1], O_RDONLY);
	check98((ssize_t)desc_from, argv[1], -1, -1);
	f = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	desc_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, f);
	check99((ssize_t)desc_to, argv[2], desc_from, -1);
	len_r = 1024;

	while (len_r == 1024)
	{
		len_r = read(desc_from, buff, 1024);
		check98(len_r, argv[1], desc_from, desc_to);
		len_w = write(desc_to, buff, len_r);
		if (len_w != len_r)
			len_w = -1;

		check99(len_w, argv[2], desc_from, desc_to);
	}
	cl_to = close(desc_to);
	cl_from = close(desc_from);

	check100(cl_to, desc_to);
	check100(cl_from, desc_from);

	return (0);
}

