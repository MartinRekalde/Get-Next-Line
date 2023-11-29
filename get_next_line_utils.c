/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:25:45 by mrekalde          #+#    #+#             */
/*   Updated: 2023/11/28 16:25:47 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*j;
	size_t			i;

	i = 0;
	j = (unsigned char *)b;
	while (len > i)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	n;
	void	*ptr;

	n = count * size;
	ptr = malloc(n);
	if (ptr != NULL)
		ft_memset(ptr, 0, n);
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s;
	int		i;

	i = 0;
	s = ft_calloc(sizeof(char), (ft_strlen(s1) + 1));
	if (!s)
		return (0);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[ft_strlen(s1)] = 0;
	return (s);
}
