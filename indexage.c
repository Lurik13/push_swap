/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:04:22 by lribette          #+#    #+#             */
/*   Updated: 2023/12/08 14:50:07 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	imaxi(t_list *a, long long ancien_max)
{
	int	i;
	int	index_max;

	i = 0;
	while (i < a->len && a->index[i] != 0)
		i++;
	index_max = i;
	while (i < a->len)
	{
		if (ancien_max > a->len && a->liste[i] > a->liste[index_max])
			index_max = i;
		else if (a->liste[i] > a->liste[index_max]
			&& a->liste[i] < a->liste[ancien_max])
			index_max = i;
		i++;
	}
	return (index_max);
}

void	ft_index(t_list *a, t_list *b)
{
	int			i;
	int			len;
	long long	maxi;

	i = 0;
	len = a->len;
	a->index = ft_calloc(a->len, sizeof(int));
	b->index = ft_calloc(a->len, sizeof(int));
	maxi = imaxi(a, 2147483648);
	a->index[maxi] = len;
	while (len - 1)
	{
		maxi = imaxi(a, maxi);
		a->index[maxi] = len - 1;
		len--;
		i++;
	}
}

int	imin(t_list *a)
{
	int	i;
	int	index_min;

	i = 0;
	index_min = 0;
	while (++i < a->len)
	{
		if (a->index[i] < a->index[index_min])
			index_min = i;
	}
	return (a->index[index_min]);
}

int	imax(t_list *a)
{
	int	i;
	int	index_max;

	i = 0;
	index_max = 0;
	while (++i < a->len)
	{
		if (a->index[i] > a->index[index_max])
			index_max = i;
	}
	return (a->index[index_max]);
}

int	where_index(t_list *a, int index)
{
	int	i;

	i = 0;
	while (a->index[i] != index)
		i++;
	return (i);
}
