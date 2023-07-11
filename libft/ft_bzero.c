/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:21:58 by ddutta            #+#    #+#             */
/*   Updated: 2023/04/14 16:56:19 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_bzero(void *b, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	d = (char *)b;
	while (i < len)
	{
		d[i] = '\0';
		i++;
	}
}
/*
int main(void)
{
    char hello[] = "Hello";
    ft_bzero(hello, 4);
    puts(hello);
    return (0);
}
*/
