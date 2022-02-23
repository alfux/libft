/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:24:12 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/23 12:36:17 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((unsigned char)*(s1 + i) == (unsigned char)*(s2 + i) && *(s1 + i)
		&& i < n)
		i++;
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
