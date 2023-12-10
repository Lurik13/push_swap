/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_total.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:04:21 by lribette          #+#    #+#             */
/*   Updated: 2023/12/10 19:12:59 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	already_sorted(t_list *a)
{
	int	i;

	i = 0;
	while (++i < a->len)
	{
		if (a->index[i] > a->index[i - 1])
			continue ;
		else
			return (0);
	}
	return (1);
}

void	main_sort(t_list *a, t_list *b)
{
	int	i;
	int	supplement;

	i = 0;
	supplement = 0;
	if (a->len == 2)
	{
		if (a->index[0] > a->index[1])
			sa(a, 1);
	}
	else if (!already_sorted(a))
	{
		supplement = sort_left_to_right(a, b);
		sort_3_values(a);
		if (supplement)
			sort_supplement(a, b, supplement);
		ending_sort(a, b);
	}
}
