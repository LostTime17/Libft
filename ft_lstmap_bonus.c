/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:02:30 by root              #+#    #+#             */
/*   Updated: 2023/09/05 15:15:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Create a new node, clear the new list if node creation fails
static t_list	*create_node(void *content, t_list **new, void (*del)(void *))
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
		ft_lstclear(new, del);
	return (node);
}

// Add a node to the new list, adjust the temp pointer as needed
static void	add_to_new_list(t_list **new, t_list **temp, t_list *node)
{
	if (!*new)
	{
		*new = node;
		*temp = *new;
	}
	else
	{
		(*temp)->next = node;
		*temp = (*temp)->next;
	}
}

// Map the list 'lst' using function 'f', and return new list
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*node;

	new = NULL;
	temp = NULL;
	while (lst)
	{
		node = create_node(f(lst->content), &new, del);
		if (!node)
			return (NULL);
		add_to_new_list(&new, &temp, node);
		lst = lst->next;
	}
	return (new);
}
