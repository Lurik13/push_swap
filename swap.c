/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:56 by lribette          #+#    #+#             */
/*   Updated: 2023/12/06 13:49:58 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a, int dble)
{
	int	value_tmp;
	int	index_tmp;

	if (a->len > 1)
	{
		value_tmp = a->liste[0];
		index_tmp = a->index[0];
		a->liste[0] = a->liste[1];
		a->index[0] = a->index[1];
		a->liste[1] = value_tmp;
		a->index[1] = index_tmp;
		if (dble)
			ft_printf("sa\n");
	}
}

void	sb(t_list *b, int dble)
{
	int	value_tmp;
	int	index_tmp;

	if (b->len > 1)
	{
		value_tmp = b->liste[0];
		index_tmp = b->index[0];
		b->liste[0] = b->liste[1];
		b->index[0] = b->index[1];
		b->liste[1] = value_tmp;
		b->index[1] = index_tmp;
		if (dble)
			ft_printf("sb\n");
	}
}

void	ss(t_list *a, t_list *b)
{
	sa(a, 0);
	sb(b, 0);
	ft_printf("ss\n");
}
