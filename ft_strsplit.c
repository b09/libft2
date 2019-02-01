/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprado <bprado@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 17:53:45 by bprado        #+#    #+#                 */
/*   Updated: 2019/01/25 17:04:53 by bprado        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy2(char *dst, const char *src, int len)
{
	int		i;

	i = 0;
	while ((len) && (src[i] != 0))
	{
		dst[i] = src[i];
		--len;
		++i;
	}
	while (len)
	{
		dst[i] = 0;
		--len;
		++i;
	}
	return (dst);
}

int		ft_strlen2(const char *s)
{
	int		i;

	i = 0;
	while (s[i] != 0)
		++i;
	return (i);
}

int		ft_wordcnt(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (s[i] != 0)
		j = 1;
	while (s[i] != 0)
	{
		++i;
		if (((s[i] == c) && (s[i - 1] != c) && (s[i + 1] != 0)))
			++j;
	}
	if ((s[ft_strlen2(s) - 1] == c) && (s[ft_strlen2(s) - 2] == c))
		--j;
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ary;
	int		i;
	int		j;

	ary = (char**)malloc(sizeof(char*) * ft_wordcnt(s, c));
	j = 0;
	i = 0;
	while ((*s != 0) || (s[i] != 0))
	{
		if (*s == c)
			++s;
		while (*s != c && *s != 0)
		{
			++s;
			++i;
			if ((*s == c) || (*s == 0))
			{
				ary[j] = (char*)malloc(sizeof(char) * i + 1);
				ary[j] = ft_strncpy2(ary[j], &s[-i], (i));
				++j;
			}
		}
		i = 0;
	}
	return (ary);
}
