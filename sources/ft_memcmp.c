/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:31:51 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/23 13:57:56 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n)
		if ((unsigned char)*((unsigned char *)s1 + i - 1)
			!= (unsigned char)*((unsigned char *)s2 + i - 1))
			return ((unsigned char)*((unsigned char *)s1 + i - 1)
				- (unsigned char)*((unsigned char *)s2 + i - 1));
	return (0);
}
