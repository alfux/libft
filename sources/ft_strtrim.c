/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:44:25 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/24 13:43:12 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (*(set + i))
		if (*(set + i++) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	start;
	size_t			len;
	char			*trim;

	start = 0;
	len = ft_strlen(s1);
	while (ft_isset(*(s1 + start), set))
		start++;
	if (len)
		while (ft_isset(*(s1 + len - 1), set))
			len--;
	trim = ft_substr(s1, start, len - start);
	return (trim);
}
