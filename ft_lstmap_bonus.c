/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:02:30 by root              #+#    #+#             */
/*   Updated: 2023/08/30 18:43:24 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *temp;

	new = NULL;
	temp = NULL;
	while (lst)
	{
		if (!temp)
		{
			temp = ft_lstnew(f(lst->content));
			new = temp;
		}
		else if (!(temp->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		else
			temp = temp->next;
		if (!temp)
			return (NULL);
		lst = lst->next;
	}
	return (new);
}