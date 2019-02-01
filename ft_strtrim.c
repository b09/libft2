/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:54:16 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/22 18:11:38 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*c;

	i = 0;
	while ((*s > 0) && (*s < 33))
		s++;
	while (*s != 0)
	{
		++i;
		++s;
	}
	--s;
	--i;
	while ((*s > 0) && (*s < 33))
	{
		--s;
		--i;
	}
	c = (char*)malloc((sizeof(char) * i) + 1);
	ft_strncpy(c, &s[-i], i + 1);
	return (c);
}
