/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:53:40 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/15 14:53:42 by bpommier         ###   ########.fr       */
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
	(void) argc;
	ft_putstr(argv[0]);
	return (0);
}
