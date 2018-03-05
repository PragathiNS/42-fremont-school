/* 
 * Allocates and returns a "fresh" memory area
 * Memory allocated is initialized to 0
 * If the allocation fails then function returns NULL
 *
 */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*area;


