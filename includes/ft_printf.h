/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-cham <ade-cham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:23:18 by ade-cham          #+#    #+#             */
/*   Updated: 2021/02/09 15:57:05 by ade-cham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

enum			e_bool
{
	false,
	true
}	e_bool;

enum			e_dir
{
	right = 0,
	left = 1
}	e_dir;

typedef struct	struct_flag
{
	va_list			*arg;
	e_dir		justified;
	e_bool		width;
	e_bool		precision;
	e_bool		zero;
//	e_bool		digit;
	e_bool		minus;

	int				len_precision;
	int				len_width;
	char			converter;
	int				counter;
}	struct_flags;

int				ft_printf(const char *format, ...);
int				ft_treat_format(va_list arg, const char *format, int counter);

char			*ft_strdup(const char *s1);
char			*ft_strchr(const char *s, int c);

size_t			ft_strlen(const char *s);

void			ft_flags_init(struct_flags *flags);
void			ft_putchar(char c);
#endif
