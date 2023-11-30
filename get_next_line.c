/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:25:37 by mrekalde          #+#    #+#             */
/*   Updated: 2023/11/29 18:18:54 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*read_from_file(int fd)
{
	char		*buffer;
	int			bytes_read;
	static int	count = 1;
	
	printf("ft_calloc#[%d]---", count++);
	buffer = ft_calloc (3 + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, 3);
	if (bytes_read <= 0)
	{
    	free (buffer);
		return (NULL);
	}
	//free (buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char *buffer;
	
	buffer = read_from_file(fd);
	return (buffer);
}
