/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:56:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/03 18:21:46 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_list *a, t_list *b)
{
	int	i;
    int len;

	i = 0;
    len = a->len / 3;
	while (i < len /*&& a->len > 3*/)
	{
        //ft_printf("\ni=%d\n", i);
		if (a->index[0] <= len)
        {
            //ft_printf("\nindex=%d <= %d\n", a->index[0], len);
            pb(a, b);
            i++;
        }
        else if (a->index[1] <= len)
        {
            //ft_printf("index=%d <= %d\n", a->index[1], len);
            sa(a, 1);
            pb(a, b);
            i++;
        }
        else if (a->index[a->len - 1] <= len)
        {
            //ft_printf("index=%d <= %d\n", a->index[a->len - 1], len);
            rra(a, 1);
            pb(a, b);
            i++;
        }
        else
            while (a->index[0] > len)
            {
                //ft_printf("index=%d   |   len=%d\n", a->index[0], len);
                ra(a, 1);
            }
	}
}

//1 105 7 6 45 26 48 96 20 35 29 34 78