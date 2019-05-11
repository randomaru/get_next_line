/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamarant <tamarant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:47:52 by tamarant          #+#    #+#             */
/*   Updated: 2019/05/08 21:04:50 by tamarant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "get_next_line.h"
#include "./libft/libft.h"

//static char		new_line()

int				get_next_line(const int fd, char **line)
{
	static char		*file[12000];
	char 	buffer[BUFF_SIZE + 1];
	int 	try;
	char    *b_file;

	while ((try = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[try] = '\0';
		//printf("%s\n", buffer);
		if (file[fd] == NULL)
			b_file = ft_strdup(buffer);
		else
			b_file = ft_strjoin(file[fd], buffer);
		if (file[fd])
			free(file[fd]);
		file[fd] = b_file;
        if (ft_strchr(buffer, '\n'))
        	break ;
	}

	if (

			)

	if (try < 0)
		return (-1);
	if (try == 0)
		return (0);
	//return (0);

}