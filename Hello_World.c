/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hello_World.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 11:14:58 by fthwala           #+#    #+#             */
/*   Updated: 2017/09/10 11:24:57 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(str);
	while (i <= len)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main()
{
	ft_putstr("Hello World");
	return (0);
}
