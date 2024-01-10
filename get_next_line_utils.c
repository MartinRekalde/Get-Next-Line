/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:25:45 by mrekalde          #+#    #+#             */
/*   Updated: 2023/12/02 13:45:23 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	n;
	unsigned int	i;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (dstsize == 0)
		return (n);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (n);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (dstsize == 0)
		return (sl);
	if (dstsize <= dl)
		return (sl + dstsize);
	dstsize = dstsize - dl;
	while (dstsize > 1 && src[i])
	{
		dst[dl + i] = src[i];
		i++;
		dstsize--;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*m;
	size_t	len;

	if (!s1 && !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	m = malloc(sizeof(char) * (len));
	if (!m)
		return (0);
	ft_strlcpy(m, s1, len);
	ft_strlcat(m, s2, len);
	return ((char *)m);
}
