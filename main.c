/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/12/10 19:44:54 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	ft_free(t_list *a, t_list *b)
{
	free(a->liste);
	free(b->liste);
}

void	ft_end_free(t_list *a, t_list *b)
{
	ft_free(a, b);
	free(a->index);
	free(b->index);
}

static void	less_than_2_args(t_list *a, t_list *b, int len)
{
	if (len <= 1)
	{
		ft_free(a, b);
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	t_list	a;
	t_list	b;

	a.liste = NULL;
	b.liste = NULL;
	if (argc == 1)
		exit(1);
	ft_main_split(argc, argv, &a, &b);
	less_than_2_args(&a, &b, a.len);
	ft_index(&a, &b);
	main_sort(&a, &b);
	ft_end_free(&a, &b);
	return (0);
}
