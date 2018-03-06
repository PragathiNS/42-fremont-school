/* 
 * Allocates and returns a "fresh" memory area
 * Memory allocated is initialized to 0
 * If the allocation fails then function returns NULL
 *
 */

#include "libft.h"
#include <sys/types.h>
#include <unistd.h>

void	*ft_memalloc(size_t size)
{
	void	*area;

	// gets the starting position of the heap
	area = sbrk(0);
	if (sbrk(size) == (void *) -1)
		return (NULL);
	return (area);
}
