/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:46:11 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/28 21:22:52 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_itoa_two(int n, char *str, int i, int k)
{
	unsigned int	j;

	if (k == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	(k < 0) ? (str[0] = '-') : str[0];
	j = n;
	k = 1;
	str[i] = 0;
	--i;
	while (i > 0)
	{
		n = n % 10;
		str[i] = (n + '0');
		j /= 10;
		n = j;
		--i;
	}
	if (str[0] != '-')
		str[0] = (n + '0');
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			k;

	i = 1;
	k = n;
	while (n > 9 || n < -9)
	{
		n /= 10;
		++i;
	}
	n = k;
	(k < 0) ? (n = -k) : n;
	(k < 0) ? (++i) : k;
	str = (char*)malloc(i + 1);
	str = ft_itoa_two(n, str, i, k);
	return (str);
}
