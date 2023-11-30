/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:45 by lribette          #+#    #+#             */
/*   Updated: 2023/11/30 15:34:32 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *a, int dble)
{
	int	tmp;
	int	i;
	
	if (a->len > 1)
	{
		i = a->len;
		tmp = a->liste[i - 1];
		while (--i)
			a->liste[i] = a->liste[i - 1];
		a->liste[0] = tmp;
		if (dble)
			ft_printf("ra\n");
	}
}

void	rb(t_list *b, int dble)
{
	int	tmp;
	int	i;
	
	if (b->len > 1)
	{
		i = b->len;
		tmp = b->liste[i - 1];
		while (--i)
			b->liste[i] = b->liste[i - 1];
		b->liste[0] = tmp;
		if (dble)
			ft_printf("rb\n");
	}
}

void	rr(t_list *a, t_list *b)
{
	ra(a, 0);
	rb(b, 0);
	ft_printf("rr\n");
}

void	rra(t_list *a, int dble)
{
	int	tmp;
	int	i;
	
	if (a->len > 1)
	{
		i = -1;
		tmp = a->liste[i + 1];
		while (++i < a->len - 1)
			a->liste[i] = a->liste[i + 1];
		a->liste[a->len - 1] = tmp;
		if (dble)
			ft_printf("rra\n");
	}
}

void	rrb(t_list *b, int dble)
{
	int	tmp;
	int	i;
	
	if (b->len > 1)
	{
		i = -1;
		tmp = b->liste[i + 1];
		while (++i < b->len - 1)
			b->liste[i] = b->liste[i + 1];
		b->liste[b->len - 1] = tmp;
		if (dble)
			ft_printf("rrb\n");
	}
}