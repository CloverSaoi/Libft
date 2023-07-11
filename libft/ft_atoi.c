/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:21:58 by ddutta            #+#    #+#             */
/*   Updated: 2023/04/14 16:56:19 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	negative;
	int	return_val;

	index = 0;
	negative = 1;
	return_val = 0;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			negative *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		return_val = (str[index] - '0') + (return_val * 10);
		index++;
	}
	return (return_val * negative);
}
