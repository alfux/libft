/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:40:35 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/21 17:40:44 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
short	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
