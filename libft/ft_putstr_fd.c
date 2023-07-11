/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:21:58 by ddutta            #+#    #+#             */
/*   Updated: 2023/04/14 16:56:19 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <fcntl.h>
// #include <stdio.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int main(void)
{
	int d;
	d = open("hello.txt", O_CREAT | O_RDWR, 777);
	if (d == -1)
	{
		printf("FAIL!");
	}
	ft_putstr_fd("Hello this is a test.", d);
	return (0);
}*/
