/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:54:05 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/24 18:45:41 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	s2 = (char*)malloc(len + 1);
	while ((*s != 0) && (*s != (char)start))
		++s;
	while ((*s != 0) && (len > 0))
	{
		s2[i++] = *s++;
		--len;
	}
	s2[i] = 0;
	return (s2);
}
