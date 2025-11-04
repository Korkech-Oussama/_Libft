/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okorkech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:02:46 by okorkech          #+#    #+#             */
/*   Updated: 2025/10/31 21:02:48 by okorkech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		counter;

	if (!lst)
		return (0);
	temp = lst;
	counter = 0;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
