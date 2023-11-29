/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:56 by lribette          #+#    #+#             */
/*   Updated: 2023/11/29 14:03:01 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *a)
{
	int	tmp;
	
	if (a->len > 1)
	{
		tmp = a->liste[a->len - 1];
		a->liste[a->len - 1] = a->liste[a->len - 2];
		a->liste[a->len - 2] = tmp;
	}
}

void	sb(t_list *b)
{
	int	tmp;
	
	if (b->len > 1)
	{
		tmp = b->liste[b->len - 1];
		b->liste[b->len - 1] = b->liste[b->len - 2];
		b->liste[b->len - 2] = tmp;
	}
}
