/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:52:18 by zilucio-          #+#    #+#             */
/*   Updated: 2022/10/13 17:30:50 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*r;

	i = 0;
	r = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			r = (char *)&s[i];
		i++;
	}
	if ((char) c == 0)
		r = (char *)&s[ft_strlen(s)];
	return (r);
}
