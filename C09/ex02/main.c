/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 18:10:45 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/27 18:10:46 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_split(av[1], av[2]);
	return (0);
}
