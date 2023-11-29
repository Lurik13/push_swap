/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:04:50 by lribette          #+#    #+#             */
/*   Updated: 2023/11/29 14:19:17 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *a, t_list *b)
{
	if (b->len > 0)
	{
		a->liste[a->len] = b->liste[b->len - 1];
		b->liste[b->len - 1] = 0;
		a->len++;
		b->len--;
	}
}

void	pb(t_list *a, t_list *b)
{
	if (a->len > 0)
	{
		b->liste[b->len] = a->liste[a->len - 1];
		a->liste[a->len - 1] = 0;
		b->len++;
		a->len--;
	}
}