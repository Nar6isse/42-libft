/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouchet <ebouchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:17:56 by ebouchet          #+#    #+#             */
/*   Updated: 2023/11/13 14:34:30 by ebouchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_cpy;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	lst_cpy = *lst;
	while (lst_cpy != NULL)
	{
		del(lst_cpy->content);
		tmp = lst_cpy;
		lst_cpy = lst_cpy->next;
		free(tmp);
	}
	*lst = NULL;
}
