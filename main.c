/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lribette <lribette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:23:06 by lribette          #+#    #+#             */
/*   Updated: 2023/11/23 17:59:17 by lribette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}

static void less_than_2(int argc)
{
	if (argc < 2)
		ft_error()
}

int	main(int argc, char **argv)
{
	int	i;
	char	*str;

	less_than_2(argc);
	str = "";
	if (argc > 2)
	{
		i = 1;
		str = argv[i];
		while (++i < argc)
		{
			str = ft_strjoin(str, argv[i]);
		}
		ft_printf("%s\n", str);
	}
	//ft_split(argv)
	return (0);
}

//penser a deuxieme if : on fait un split puis atoi, puis on passe dans la 
//deuxieme condition