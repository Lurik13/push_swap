/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/11/22 16:38:20 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_printf("<2 Error\n");
		return (0);
	}
	if (sizeof(argv[1]) == sizeof(char *))
		ft_printf("sizeof(char) OK");
	return (0);
}

//gerer si un argv est char

//penser a deuxieme if : on fait un split puis atoi, puis on passe dans la 
//deuxieme condition