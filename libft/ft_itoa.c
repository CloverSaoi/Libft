/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:30:32 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/18 18:12:56 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int	count_digits(int n)
{
	if (n == 0)
		return (0);
	return (count_digits(-(n / 10)) + 1);
}

char	*num_positive(int n)
{
	int		dig_c;
	char	*num_tbp;
	int		i;

	dig_c = count_digits(n);
	num_tbp = ft_calloc(sizeof(char), dig_c + 1);
	if (num_tbp == NULL)
		return (NULL);
	i = dig_c - 1;
	while (n > 0)
	{
		num_tbp[i] = (n % 10) + '0';
		i--;
		n = n / 10;
	}
	return (num_tbp);
}

char	*num_negative(int n)
{
	int		dig_c;
	char	*num_tbp;
	int		i;

	dig_c = count_digits(n);
	num_tbp = ft_calloc(sizeof(char), dig_c + 2);
	if (num_tbp == NULL)
		return (NULL);
	i = dig_c;
	num_tbp[0] = '-';
	while (n < 0)
	{
		num_tbp[i] = -(n % 10) + '0';
		i--;
		n = n / 10;
	}
	return (num_tbp);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == 2147483647)
		return (ft_strdup("2147483647"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		return (num_negative(n));
	else
		return (num_positive(n));
}
