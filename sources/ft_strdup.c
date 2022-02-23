/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:13:18 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/23 18:39:12 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*cpy;
	unsigned int	i;

	i = 0;
	while (*(str + i))
		i++;
	cpy = malloc(i + 1);
	if (cpy)
		ft_strlcpy(cpy, str, i + 1);
	return (cpy);
}
