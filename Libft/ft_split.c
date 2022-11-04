/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:20:06 by zilucio-          #+#    #+#             */
/*   Updated: 2022/10/13 21:45:08 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	char	**ft_free(char	**str, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static	size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 && s[0] != c)
			|| (s[i] == c && s[i + 1] != c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

static	char	**ft_str_words(char const *s, char c, char **newstr)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (k < count_word(s, c))
	{
		while (s[i] == c)
		{
			i++;
			j++;
		}
		while (s[i] != c && s[i])
			i++;
		newstr[k] = ft_substr(s, j, (i - j));
		if (!newstr[k])
			return (ft_free(newstr, k));
		j = j + (i - j) + 1;
		i = j;
		k++;
	}
	newstr[k] = NULL;
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;

	newstr = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!newstr || !s)
		return (NULL);
	return (ft_str_words(s, c, newstr));
}
