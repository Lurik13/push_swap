/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:56:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/06 12:41:49 by lribette         ###   ########.fr       */
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

int	first_sort(t_list *a, t_list *b)
{
	int	twothirds;
	int	onethird;
	int	supplement;

	twothirds = a->len / 3 * 2;
	onethird = a->len / 3;
	supplement = 0;
	while (a->len != 3 && twothirds > 3 && onethird > 3)
	{
		thirds(a, b, onethird, twothirds);
		twothirds = (a->len / 3) * 2;
		onethird = a->len / 3;
	}
	while (a->len != 3)
	{
		pb(a, b);
		supplement++;
	}
	return (supplement);
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
//79 16 65 45 36 1 27 96 57 62 86 82 90 50 55 20 48 73 61 99 7 5 64 17 54 8 44 26 38 95 91 88 18 100 35 47 14 70 15 85 52 22 72 40 56 37 32 83 89 98 21 51 25 12 93 76 80 66 9 31 2 69 3 11 13 6 68 41 33 87 60 39 67 49 46 34 59 84 78 74 92 19 29 53 58 94 24 63 30 71 77 10 81 23 42 4 75 28 43 97 