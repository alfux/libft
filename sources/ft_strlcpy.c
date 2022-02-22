/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:02:05 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/22 18:43:16 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;

	i = 0;
	while (i++ + 1 < dstsize && *(src + i - 1))
		*(dst + i - 1) = *(src + i - 1);
	if (dstsize)
		*(dst + i - 1) = '\0';
	while (*(src + i - 1))
		i++;
	return (i - 1);
}
