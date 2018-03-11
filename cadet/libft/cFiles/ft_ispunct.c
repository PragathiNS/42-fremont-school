#include "libft.h"

int	ft_ispunct(int c)
{
	if (!(ft_isspace(c) || ft_isalnum(c)))
		return (1);
	return (0);
}
