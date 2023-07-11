/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:17:39 by ddutta            #+#    #+#             */
/*   Updated: 2023/03/09 19:17:44 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_tolower(int c)
{
	if (('A' <= c) && (c <= 'Z'))
		c += 32;
	return (c);
}

/*int main(void)
{
    int c = 'C';
    printf("in lowercase: %c to %c\n",c, ft_tolower(c));
    return (0);
}*/
