#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of file
 * Return: 1 for success, -1 when fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int numb_w, cont, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}
	cont = open(filename, O_WRONLY | O_APPEND);
	numb_w = write(cont, text_content, leng);
	if (cont == -1 || numb_w == -1)
		return (-1);

	close(cont);
	return (1);
}

