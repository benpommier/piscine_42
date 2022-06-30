/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:13:57 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/29 19:37:43 by lulaens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*read_file(char *av)
{
	char	*buf;
	int		fd;
	int		rest;
	int		i;

	buf = malloc(1024 * sizeof(char));
	fd = open(av, O_RDONLY);
	rest = read(fd, buf, 1024);
	i = 0;
	while (rest == 1024)
	{
		rest = read(fd, buf, 1024);
		i++;
	}
	rest += 1024 * i;
	close(fd);
	free(buf);
	buf = malloc(rest * sizeof(char));
	fd = open(av, O_RDONLY);
	rest = read(fd, buf, rest);
	close(fd);
	return (buf);
}

char	*ft_input(void)
{
	char	*str;
	int		fd;

	str = malloc(2100000);
	read(0, str, 2100000);
	str[ft_strlen(str) - 1] = '\0';
	fd = open(str, O_RDONLY);
	read(fd, str, 2100000);
	return (str);
}

void	make_newline(char *str, int i, int ac)
{
	create_table(str);
	if (i < ac - 1)
		write(1, "\n", 2);
}

int	main(int ac, char **av)
{
	int		i;
	char	*str;

	i = 1;
	if (ac == 1)
	{	
		str = ft_input();
		if (check_all(str) == 0 || str == NULL)
			ft_putstr("map error\n");
		else
			create_table(str);
	}
	else
	{
		while (i < ac)
		{
			str = read_file(av[i]);
			if (check_all(str) == 0 || str == NULL)
				ft_putstr("map error\n");
			else
				make_newline(str, i, ac);
			i++;
		}
	}
}
