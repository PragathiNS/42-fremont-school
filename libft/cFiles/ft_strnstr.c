#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	// if empty needle
	if (*needle == '\0')
		return ((char *) haystack);
	// len is smaller than the needle
	if (needle_len > len)
		return (NULL);
	while ((haystack = ft_memchr(haystack, *needle, len)) != NULL)
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		haystack++;
		// TODO : Find a way to reduce the len variable
		len = len 
	}
	return (NULL);
}
