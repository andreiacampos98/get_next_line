/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaraujo <anaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 12:10:14 by anaraujo          #+#    #+#             */
/*   Updated: 2022/11/24 20:52:17 by anaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*ft_strjoin(char *left_str, char *buff);

size_t	ft_strlen(char *s);

char	*ft_strchr(const char *s, int c);

char	*ft_read(int fd, char *str);

char	*ft_line(char *str);

char	*ft_str_without_line(char *str);

char	*get_next_line(int fd);

#endif