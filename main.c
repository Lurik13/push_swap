/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/11/24 12:02:04 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}

static void less_than_2_args(int argc)
{
	if (argc <= 2)
		ft_error();
}

int	main(int argc, char **argv)
{
	int	i;
	char	**tab;

	i = -1;
	less_than_2_args(argc);
	tab = ft_main_split(argc, argv);
	while (++i < ft_listlen(tab))
		ft_printf("%s | ", tab[i]);
	return (0);
}
	/*i = 0;
	while (i < )
	{
		printf("string %d : %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}*/

//penser a deuxieme if : on fait un split puis atoi, puis on passe dans la 
//deuxieme condition