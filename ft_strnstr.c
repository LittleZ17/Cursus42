/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:54:17 by zilucio-          #+#    #+#             */
/*   Updated: 2022/10/01 16:47:02 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	if ((!*str1 && !*str2) || !*str2)
		return ((char *)str1);
	if (!*str1)
		return (0);
	j = 0;
	while (j < n && n != 0 && *str1)
	{
		if (*str1 == *str2)
		{
			i = 1;
			while (str2[i] == str1[i] && str2[i] && j + i < n)
				i++;
			if (!str2[i])
				return ((char *) str1);
		}
		str1++;
		j++;
	}
	return (NULL);
}
