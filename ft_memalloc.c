/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:46:23 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/21 16:44:12 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;
	char *a;

	ptr = &a;
	a = malloc(size);
	if (!a)
		return (NULL);
	while (size)
		a[size--] = 0;
	return (ptr);
}
