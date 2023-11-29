/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/11/29 14:03:48 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

static void	less_than_2_args(int argc)
{
	if (argc <= 2)
		exit(1);
}

/*
check_a(t_list *a)
{
	a->liste_a;
}

ininit_a(t_list *a)
{
	t_list c;

	c.len_a = 19;
	
	a+>liste_a[0] = 12;
	
	check_a(a);
}*/

int	main(int argc, char **argv)
{
	int		i;
	t_list	a;
	t_list	b;

	/*a.liste_a[0] = 15;
	if (ft_atoi(argv[i]))*/
	a.liste = NULL;
	b.liste = NULL;
	i = -1;
	less_than_2_args(argc);
	ft_main_split(argc, argv, &a, &b);
	//ininit_a(&a);
	while (++i < a.len)
		ft_printf("%d | ", a.liste[i]);
	free(a.liste);
	return (0);
}
//tient dans un int
//tri par nombre de chiffres