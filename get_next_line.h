/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:25:30 by mrekalde          #+#    #+#             */
/*   Updated: 2024/01/17 18:39:47 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>

//get_next_line.c
char	*get_next_line(int fd);

//get_next_line_utils.c
size_t	ft_strlen(char const *str);
char	*ft_strchr(char const *s, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(char const *src);
char	*ft_strjoin(char *s1, const char *s2);

#endif
