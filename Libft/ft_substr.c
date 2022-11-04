/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:28:34 by zilucio-          #+#    #+#             */
/*   Updated: 2022/10/13 21:36:15 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nwstr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	nwstr = malloc(sizeof(char) * (len + 1));
	if (!(nwstr))
		return (NULL);
	while (i < len && s[start + i])
	{
		nwstr[i] = s[start + i];
		i++;
	}
	nwstr[i] = '\0';
	return (nwstr);
}
