/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:56:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/03 20:40:12 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void static	two_thirds(t_list *a, )

void	init(t_list *a, t_list *b)
{
	int	len;

	len = a->len / 3 * 2;
	while (b->len < len /*&& a->len > 3*/)
	{
		//ft_printf("\ni = %d\nMoitie=%d   Len=%d\ni[0]=%d\n", i, len / 2, len, a->index[0]);
		if (a->index[0] <= len)
		{
			//ft_printf("\ni[0]=%d\n", a->index[0]);
			pb(a, b);
			if (b->index[0] <= len / 2)
				continue ;
			else
				rb(b, 1);
		}
		else if (a->index[1] <= len)
		{
			//ft_printf("\ni[1]=%d\n", a->index[1]);
			sa(a, 1);
			pb(a, b);
			if (b->index[0] <= len / 2)
				continue ;
			else
				rb(b, 1);
		}
		else if (a->index[a->len - 1] <= len)
		{
			//ft_printf("\ni[fin]=%d\n", a->index[a->len - 1]);
			rra(a, 1);
			pb(a, b);
			if (b->index[0] <= len / 2)
				continue ;
			else
				rb(b, 1);
		}
		else
			while (a->index[0] > len && b->len < len)
				ra(a, 1);
	}
}



//1 105 7 6 45 26 48 96 20 35 29 34 78