/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/21 18:35:04 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("Wow, this string is %i characters long!\n", ft_strlen(*(argv + 1)));
	return (0);
}
