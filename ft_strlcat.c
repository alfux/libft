/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:09:34 by afuchs            #+#    #+#             */
/*   Updated: 2022/03/01 17:29:18 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dst + i))
		i++;
	while (i++ + 1 < dstsize && *(src + j))
		*(dst + i - 1) = *(src + j++);
	if (dstsize && i - 1 < dstsize)
		*(dst + i - 1) = '\0';
	while (*(src + j))
		j++;
	return (j + dstsize);
}
