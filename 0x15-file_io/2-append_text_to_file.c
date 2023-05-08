#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to add to the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	FILE *fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);

		if (fwrite(text_content, sizeof(char), len, fp) != len)
		{
			fclose(fp);
			return (-1);
		}
	}

	fclose(fp);
	return (1);
}

