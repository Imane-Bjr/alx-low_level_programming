#include "main.h"
/**
 * create_file - creates a file.
 * @text_content:  NULL terminated string to write to the file
 * @filename: name of the file to create
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t numb_w;
	int cont, leng = 0;
	mode_t m = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	cont = open(filename, O_CREAT | O_WRONLY | O_TRUNC, m);
	if (cont == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
		numb_w = write(cont, text_content, leng);
		if (numb_w == -1)
			return (-1);
	}

	close(cont);
	return (1);
}

