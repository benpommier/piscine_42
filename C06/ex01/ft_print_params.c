/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:52:41 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/16 17:52:42 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

int	main(int argc, char **argv)
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
