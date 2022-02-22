/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/22 18:52:07 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
#define TEST 7

void	ft_showstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (*(str + i))
		write(1, str + i++, 1);
}

void	ft_strcpy(char *dst, char *src)
{
	unsigned int	i;

	i = 0;
	while (*(src + i++))
		*(dst + i - 1) = *(src + i - 1);
	*(dst + i - 1) = '\0';
}

void	print_mem(void *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		printf("%c", *((char *)str + i++));
}

int	main(int argc, char **argv)
{
	char			str[7];
	unsigned int	ret;

	(void)argc;
	(void)argv;
	ft_strcpy(str, "aabbcc");
	ret = strlcpy(str, "xxxxxx", TEST);
	ft_showstr(str);
	ft_showstr("\n");
	printf("strlcpy: %u\n", ret);
	ft_strcpy(str, "aabbcc");
	ret = ft_strlcpy(str, "xxxxxx", TEST);
	ft_showstr(str);
	ft_showstr("\n");
	printf("ft_strlcpy: %u\n", ret);
	return (0);
}
