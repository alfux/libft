/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:53:50 by afuchs            #+#    #+#             */
/*   Updated: 2022/03/01 11:08:49 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if ((**lst).next)
		ft_lstclear(&(**lst).next, del);
	ft_lstdelone(*lst, del);
	*lst = (t_list *)0;
}
