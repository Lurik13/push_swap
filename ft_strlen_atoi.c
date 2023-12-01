/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:01:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/01 18:35:54 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_listlen(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(char *nptr, int i, t_list *a, t_list *b)
{
	long long		integer;
	int				nega;

	integer = 0;
	nega = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		nega *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		integer = integer * 10 + nptr[i] - 48;
		i++;
	}
	if (integer * nega > 2147483647 || integer * nega < -2147483648)
	{
		ft_free(a, b);
		free(nptr);
		ft_error();
	}
	return (integer * nega);
}
