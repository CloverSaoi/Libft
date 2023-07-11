/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:18:22 by ddutta            #+#    #+#             */
/*   Updated: 2023/03/09 17:18:25 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (('a' <= c) && (c <= 'z'))
		return (1);
	else if (('A' <= c) && (c <= 'Z'))
		return (1);
	else if (('0' <= c) && (c <= '9'))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    int a = ')';
    int c = ft_isalnum(a);
    printf("%d\n", c);
}
*/
