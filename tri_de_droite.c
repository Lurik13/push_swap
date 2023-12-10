/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_de_droite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:56:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/10 17:37:29 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	two_thirds(t_list *a, int index, int len_divised, t_list *b)
{
	pb(a, b);
	if (index > len_divised)
		rb(b, 1);
}

static void	thirds(t_list *a, t_list *b, int onethird, int twothirds)
{
	int	one;
	int	two;

	one = b->len + onethird;
	two = b->len + twothirds;
	while (b->len < two && a->len != 3)
	{
		if (a->index[0] <= two)
			two_thirds(a, a->index[0], one, b);
		else
			ra(a, 1);
	}
}

int	sort_left_to_right(t_list *a, t_list *b)
{
	int	twothirds;
	int	onethird;
	int	supplement;

	twothirds = a->len / DIVISION * 2;
	onethird = a->len / DIVISION;
	supplement = 0;
	while (a->len != 3 && twothirds)
	{
		thirds(a, b, onethird, twothirds);
		twothirds = (a->len / DIVISION) * 2;
		onethird = a->len / DIVISION;
	}
	while (a->len != 3)
	{
		pb(a, b);
		supplement++;
	}
	return (supplement);
}

void	sort_3_values(t_list *a)
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
