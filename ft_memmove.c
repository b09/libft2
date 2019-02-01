/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 15:36:19 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/15 17:21:58 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;
	size_t	len2;

	len2 = len;
	ptr = malloc(sizeof(ptr) * len);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, src, len);
	ft_memcpy(dst, ptr, len);
	free(ptr);
	return (dst);
}
