/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_de_droite.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:56:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/08 16:18:11 by lribette         ###   ########.fr       */
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
		else if (a->index[a->len - 1] <= two)
		{
			rra(a, 1);
			two_thirds(a, a->index[0], one, b);
		}
		else
			while (a->index[0] > two && b->len < two)
				ra(a, 1);
	}
}

int	va(int one, int two)
{
	int	result;

	result = one - two;
	if (result < 0)
		return (-result);
	return (result);
}

int	sort_left_to_right(t_list *a, t_list *b)
{
	int	twothirds;
	int	onethird;
	int	supplement;

	twothirds = a->len / DIVISION * 2;
	onethird = a->len / DIVISION;
	supplement = 0;
	while (a->len != 3 && twothirds > 3 && onethird > 3)
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
