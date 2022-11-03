/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:35:34 by zilucio-          #+#    #+#             */
/*   Updated: 2022/09/30 18:44:28 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*nwstr;
	int		i;
	int		j;

	nwstr = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!str1 || !str2 || !nwstr)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		nwstr[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
		nwstr[i++] = str2[j++];
	nwstr[i] = '\0';
	return (nwstr);
}
