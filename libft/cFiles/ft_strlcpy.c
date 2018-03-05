/*
 * size-bounded string copying
 * Copy as much of the source string to the dest as possible, and null terminate the dest. Return the len of the source
 */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size-- == 0)
		return (srclen);
	// if size is smaller than srclen then return only the copied elements(size)
	len = (size < srclen) ? size : srclen;
	ft_memmove(dest, src, len);
	dest[len] = '\0';
	return (srclen);
}
