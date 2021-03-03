/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 17:33:04 by ade-cham          #+#    #+#             */
/*   Updated: 2021/01/28 15:17:34 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s && s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (0);
}
