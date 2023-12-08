/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_de_gauche.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:42:43 by lribette          #+#    #+#             */
/*   Updated: 2023/12/08 15:28:26 by lribette         ###   ########.fr       */
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
			rrb(b, 1);
			ra_or_rra(a, b, closest_value(a, b));
		}
		while (where_index(b, imax(b)) <= b->len / 2 && b->len)
			ra_or_rra(a, b, closest_value(a, b));
	}
}

//prendre en compte pour 10 valeurs

//1 105 7 26 45 35 48 96 20 6 29 34 78
//79 16 65 45 36 1 27 96 57 62 86 82 90 50 55 20 48 73 61 99 7 5 64 17 54 8 44 26 38 95 91 88 18 100 35 47 14 70 15 85 52 22 72 40 56 37 32 83 89 98 21 51 25 12 93 76 80 66 9 31 2 69 3 11 13 6 68 41 33 87 60 39 67 49 46 34 59 84 78 74 92 19 29 53 58 94 24 63 30 71 77 10 81 23 42 4 75 28 43 97 101