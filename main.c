/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/12/01 19:31:20 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	//ft_free(&a, &b);
	ft_printf("Error\n");
	exit(1);
}

void	ft_free(t_list *a, t_list *b)
{
	free(a->liste);
	free(b->liste);	
}

static void	less_than_2_args(int argc, char **argv)
{
	if (argc == 2 && !ft_ischar(argv[1]))
		ft_error();
	if (argc <= 2)
		exit(1);
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	a;
	t_list	b;

	a.liste = NULL;
	b.liste = NULL;
	i = -1;
	less_than_2_args(argc, argv);
	ft_main_split(argc, argv, &a, &b);
	
	
	init(&a, &b);
	
	ft_printf("A : ");
	while (++i < a.len)
		ft_printf("%d | ", a.liste[i]);
	i = -1;
	ft_printf("\nB : ");
	while (++i < b.len)
		ft_printf("%d | ", b.liste[i]);
	free(a.liste);
	free(b.liste);
	return (0);
}
