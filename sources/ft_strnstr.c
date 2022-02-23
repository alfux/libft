/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:03:52 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/23 14:55:19 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!*(needle))
		return ((char *)haystack);
	while (i < len && *(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
			while (*(haystack + i + j) == *(needle + j))
				if (!*(needle + ++j))
					return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (0x0);
}
