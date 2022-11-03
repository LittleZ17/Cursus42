/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:07:46 by zilucio-          #+#    #+#             */
/*   Updated: 2022/10/01 16:58:07 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*nwstr;

	i = 0;
	len = 0;
	while (s1[len])
		len ++;
	nwstr = malloc(sizeof(char) * (len +1));
	if (!(nwstr))
		return (NULL);
	while (s1[i])
	{
		nwstr[i] = s1[i];
		i++;
	}
	nwstr[i] = '\0';
	return (nwstr);
}
