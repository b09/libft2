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

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	j;
	int				k;

	i = 0;
	k = n;
	(n < 0) ? (n = -n) : n;
	str = (char*)malloc(12);
	(k < 0) ? (str[0] = '-') : str[0];
	(k < 0) ? (++i) : i;
	j = n;
	k = 1;
	while (n > 9)
	{
		n /= 10;
		k *= 10;
		(n <= 9) ? ((str[i++]) = (n + '0')) : (n);
		(n <= 9) ? (j %= k) : (n);
		(n <= 9) ? (k = 1) : (n);
		(n <= 9) ? (n = j) : (n);
		(n <= 9) ? (str[i] = (n + '0')) : (n);
	}
	return (str);
}
