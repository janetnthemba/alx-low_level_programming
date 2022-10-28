#include "main.h"
#include <string.h>

/**
 * _strcat - concats two arrays
 *  @dest: copy to
 *  @src: copy from
 *  Return : pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
