/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:09:34 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/23 11:25:40 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
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
	while (*(src + j++))
		i++;
	return (i - 1);
}
