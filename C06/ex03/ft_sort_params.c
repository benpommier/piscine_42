/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:59:17 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/16 17:59:19 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && s1[counter] && s2[counter])
		counter++;
	return (s1[counter] - s2[counter]);
}

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
	int		counter;
	char	*temp;

	counter = 1;
	while (counter < argc - 1)
	{
		if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
		{
			temp = argv[counter];
			argv[counter] = argv[counter + 1];
			argv[counter + 1] = temp;
			counter = 0;
		}
		counter++;
	}
	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}
