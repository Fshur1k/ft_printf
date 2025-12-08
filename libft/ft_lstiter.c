/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 07:37:05 by ofedota           #+#    #+#             */
/*   Updated: 2025/11/25 11:08:16 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
  * @brief Apply function to all list memembers.
  * @param lst Entry point.
  * @param f Address Function.
  */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (!lst || !f)
		return ;
	node = NULL;
	while (lst != NULL)
	{
		f(lst->content);
		node = lst->next;
		lst = node;
	}
}
