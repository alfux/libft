/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/02/28 18:32:45 by afuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include "libft.h"
#define TEST 8

void	print_mem(void *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		printf("%c", *((char *)str + i++));
}

void	test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'x';
}

int	main(int argc, char **argv)
{
	t_list	*start;

	start = (t_list *)0;
	(void)argv;
	if (argc < 4)
		return (1);
//	start = ft_lstnew(*(argv + 1));
//	(*start).next = ft_lstnew(*(argv + 2));
//	(*(*start).next).next = ft_lstnew(*(argv + 3));
//	ft_putendl_fd((*start).content, 1);
//	ft_putendl_fd((*(*start).next).content, 1);
//	ft_putendl_fd((*(*(*start).next).next).content, 1);
	ft_putendl_fd(ft_itoa(ft_lstsize(start)), 1);
//	free((*(*start).next).next);
//	free((*start).next);
//	free(start);
	return (0);
}
