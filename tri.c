/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:56:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/03 23:27:22 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void static	two_thirds(t_list *a, int index, int len_divised, t_list *b)
{
	pb(a, b);
	if (index > len_divised)
		rb(b, 1);
}

static void	thirds(t_list *a, t_list *b, int onethird, int twothirds)
{
	while (b->len < twothirds && a->len != 3)
	{
		if (a->index[0] <= twothirds)
			two_thirds(a, a->index[0], onethird, b);
		else if (a->index[a->len - 1] <= twothirds)
		{
			rra(a, 1);
			two_thirds(a, a->index[0], onethird, b);
		}
		else
			while (a->index[0] > twothirds && b->len < twothirds)
				ra(a, 1);
	}
}

void	first_sort(t_list *a, t_list *b)
{
	int	twothirds;
	int	onethird;
	int	tmp;

	twothirds = a->len / 3 * 2;
	onethird = a->len / 3;
	tmp = twothirds;
	while (a->len != 3)
	{
		thirds(a, b, onethird, twothirds);
		tmp = twothirds;
		twothirds += onethird / 3 * 2;
		onethird = tmp + onethird / 3;
	}
}
void	second_sort(t_list *a)
{
	if ((a->index[0] > a->index[2] && a->index[2] > a->index[1])
		|| (a->index[1] > a->index[2] && a->index[2] > a->index[0]))
		ra(a, 1);
	if ((a->index[2] > a->index[0] && a->index[0] > a->index[1])
		|| (a->index[0] > a->index[1] && a->index[1] > a->index[2]))
		sa(a, 1);
	if (a->index[1] > a->index[0] && a->index[0] > a->index[2])
		rra(a, 1);
}

//1 105 7 26 45 35 48 96 20 6 29 34 78