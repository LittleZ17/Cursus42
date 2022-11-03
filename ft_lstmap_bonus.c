/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zilucio- <zilucio-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:48:17 by zilucio-          #+#    #+#             */
/*   Updated: 2022/10/13 22:05:55 by zilucio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nwlst;
	t_list	*nodo;
	void	*tmp;

	nwlst = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		nodo = ft_lstnew(tmp);
		if (!nodo)
		{
			del(tmp);
			ft_lstclear(&nwlst, del);
			return (nwlst);
		}
		ft_lstadd_back(&nwlst, nodo);
		lst = lst->next;
	}
	return (nwlst);
}
