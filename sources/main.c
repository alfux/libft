/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuchs <afuchs@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:38:39 by afuchs            #+#    #+#             */
/*   Updated: 2022/03/01 13:12:10 by afuchs           ###   ########.fr       */
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

void	del(void *str)
{
	size_t	n;

	n = 0;
	while (*((char *)str + n))
		n++;
	ft_bzero(str, n);
}

void	upper(void *str)
{
	size_t	i;

	i = 0;
	while (*((char *)str + i++))
		*((char *)str + i - 1) = ft_toupper(*((char *)str + i - 1));
}

void	*dupli(void *str)
{
	char	*cpy;

	cpy = ft_strdup(str);
	upper(cpy);
	return (cpy);
}

int	main(int argc, char **argv)
{
	t_list	*start;
	t_list	*newlst;

	start = (t_list *)0;
	newlst = (t_list *)0;
	if (argc < 4)
		return (1);
	start = ft_lstnew(*(argv + 1));
	ft_lstadd_back(&start, ft_lstnew(*(argv + 2)));
	ft_putendl_fd((*start).content, 1);
	ft_putendl_fd((*(*start).next).content, 1);
	newlst = ft_lstmap(start, &dupli, &free);
	ft_lstclear(&start, &del);
	ft_putendl_fd((*newlst).content, 1);
	ft_putendl_fd((*(*newlst).next).content, 1);
	ft_lstclear(&newlst, &free);
	return (0);
}
