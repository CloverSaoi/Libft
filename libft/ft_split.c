/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:38:43 by ddutta            #+#    #+#             */
/*   Updated: 2023/05/18 17:59:24 by ddutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_areas(const char *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			counter++;
		i++;
	}
	return (counter);
}

char	*strdup_until(const char *s, char c)
{
	int		len;
	char	*ret;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s, len + 1);
	return (ret);
}

void	*cleanup(char **array, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		counted;
	int		word;
	int		i;

	if (s == NULL)
		return (NULL);
	counted = count_areas(s, c);
	array = ft_calloc(sizeof(char *), (counted + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0' || word >= counted)
			break ;
		array[word] = strdup_until(&s[i], c);
		if (array[word] == NULL)
			return (cleanup(array, word + 1));
		i += ft_strlen(array[word++]);
	}
	return (array);
}
