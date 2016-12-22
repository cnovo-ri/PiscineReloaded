/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnovo-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:42:49 by cnovo-ri          #+#    #+#             */
/*   Updated: 2016/11/23 18:30:18 by cnovo-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_display_file(char *file)
{
	int		fd;
	int		len;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	while ((len = read(fd, buf, BUF_SIZE)) != 0)
	{
		buf[len] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
