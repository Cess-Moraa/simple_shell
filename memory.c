#include "shell.h"

/**
 * bfree - frees memory
 * @ptr: arr to be freed
 * Return: 1(success), else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
