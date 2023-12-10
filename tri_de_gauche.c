/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_de_gauche.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:42:43 by lribette          #+#    #+#             */
/*   Updated: 2023/12/10 19:12:15 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	closest_value(t_list *a, t_list *b)
{
	int	i;
	int	closest;

	i = -1;
	closest = where_index(a, imax(a));
	while (++i < a->len)
	{
		if (b->index[0] < a->index[i]
			&& a->index[i] - b->index[0] < a->index[closest] - b->index[0])
			closest = i;
	}
	return (a->index[closest]);
}

static void	ra_or_rra(t_list *a, t_list *b, int value)
{
	int	index;

	index = where_index(a, value);
	while (a->index[0] != value)
	{
		if (index <= a->len / 2)
			ra(a, 1);
		else
			rra(a, 1);
	}
	pa(a, b);
}

void	sort_supplement(t_list *a, t_list *b, int supplement)
{
	while (supplement--)
	{
		if (b->index[0] < imin(a) || b->index[0] > imax(a))
			ra_or_rra(a, b, imin(a));
		else
			ra_or_rra(a, b, closest_value(a, b));
	}
}

void	ending_sort(t_list *a, t_list *b)
{
	while (b->len)
	{
		while (where_index(b, imax(b)) > b->len / 2 && b->len)
		{
			if (b->index[b->len - 2] > b->index[b->len - 1])
			{
				rrb(b, 1);
				rrb(b, 1);
				sb(b, 1);
			}
			else
				rrb(b, 1);
			ra_or_rra(a, b, closest_value(a, b));
		}
		while (where_index(b, imax(b)) <= b->len / 2 && b->len)
			ra_or_rra(a, b, closest_value(a, b));
	}
	while (where_index(a, imin(a)) != 0)
		rra(a, 1);
}
