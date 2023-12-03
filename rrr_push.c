/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:50 by lribette          #+#    #+#             */
/*   Updated: 2023/12/03 18:11:39 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	pa(t_list *a, t_list *b)
{
	if (b->len > 0)
	{
		a->len++;
		a->liste[a->len] = b->liste[b->len - 1];
		a->index[a->len] = b->index[b->len - 1];
		b->liste[b->len - 1] = 0;
		b->index[b->len - 1] = 0;
		b->len--;
		ft_printf("pa\n");
	}
}*/

void	pa(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	if (b->len > 0)
	{
		a->len++;
		rra(a, 0);
		a->liste[i] = b->liste[0];
		a->index[i] = b->index[0];
		b->liste[0] = 0;
		b->index[0] = 0;
		rb(b, 0);
		b->len--;
		ft_printf("pa\n");
	}
}

/*void	pb(t_list *a, t_list *b)
{
	if (a->len > 0)
	{
		b->len++;
		b->liste[b->len] = a->liste[a->len - 1];
		b->index[b->len] = a->index[a->len - 1];
		a->liste[a->len - 1] = 0;
		a->index[a->len - 1] = 0;
		a->len--;
		ft_printf("pb\n");
	}
}*/

void	pb(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	if (a->len > 0)
	{
		b->len++;
		rrb(b, 0);
		b->liste[i] = a->liste[0];
		b->index[i] = a->index[0];
		a->liste[0] = 0;
		a->index[0] = 0;
		ra(a, 0);
		a->len--;
		ft_printf("pb\n");
	}
}

void	rrr(t_list *a, t_list *b)
{
	rra(a, 0);
	rrb(b, 0);
	ft_printf("rrr\n");
}