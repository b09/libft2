/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:52:21 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/20 17:53:17 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n--) && (*s1++ == *s2++))
	{
		if (!n)
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}
