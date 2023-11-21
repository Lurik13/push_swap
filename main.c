/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/11/21 16:01:03 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checkchar(int argc, char **argv)
{
	int i;

	i = 1;
	while(i < argc)
	{
		if (sizeof(argv[i]) == sizeof(char *))
			return(1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_printf("Error\n");
	if (argc == 2 && sizeof(argv[1]) == sizeof(char *))
		ft_printf("OK");
	else
	{
		if(ft_checkchar(argc, argv) == 1)
			ft_printf("Error\n");
		else
		{
			ft_printf("OK");
		}
	}
	return (0);
}

//gerer si un argv est char

//penser a deuxieme if : on fait un atoi puis split, puis on passe dans la 
//deuxieme condition