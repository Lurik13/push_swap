/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:01:35 by lribette          #+#    #+#             */
/*   Updated: 2023/12/08 14:44:37 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	error_atoi(t_list *a, t_list *b)
{
	ft_free(a, b);
	ft_error();
}

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
	if (nptr[i] == '0' && (nptr[i + 1] != ' ' || i + 1 == ft_strlen(nptr)))
		error_atoi(a, b);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		integer = integer * 10 + nptr[i] - 48;
		i++;
		if (integer * nega > 2147483647 || integer * nega < -2147483648)
			error_atoi(a, b);
	}
	return (integer * nega);
}
