/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:25:45 by mrekalde          #+#    #+#             */
/*   Updated: 2024/01/17 18:40:23 by mrekalde         ###   ########.fr       */
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

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst_start;

	dst_start = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_start);
}

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
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
