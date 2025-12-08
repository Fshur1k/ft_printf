/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:37:01 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 07:04:06 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Delete entire list by entry point. And sen pointer NULL.
 * @param lst Pointer to a node.
 * @param del Function used to delete content.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_node;

	temp_node = NULL;
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp_node;
	}
	*lst = NULL;
}
