/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 10:11:47 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/18 10:11:48 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rush(char *argv, int tab[4][4], int counter);
void	ft_putstr(char *str);

int	ft_check_angles(char *argv)
{
	char	n;

	n = '1';
	if ((argv[0] == n && argv[16] != n) || (argv[0] != n && argv[16] == n))
		return (0);
	if ((argv[6] == n && argv[24] != n) || (argv[6] != n && argv[24] == n))
		return (0);
	if ((argv[8] == n && argv[22] != n) || (argv[8] != n && argv[22] == n))
		return (0);
	if ((argv[14] == n && argv[30] != n) || (argv[14] != n && argv[30] == n))
		return (0);
	if (argv[0] == n && (argv[2] == n || argv[4] == n || argv[6] == n))
		return (0);
	if (argv[8] == n && (argv[10] == n || argv[12] == n || argv[14] == n))
		return (0);
	if (argv[16] == n && (argv[18] == n || argv[20] == n || argv[22] == n))
		return (0);
	if (argv[24] == n && (argv[26] == n || argv[28] == n || argv[30] == n))
		return (0);
	return (1);
}

int	ft_check_4and1(char *argv)
{
	int	i;

	i = 0;
	while (i <= 6)
	{
		if ((argv[i] == '4' && argv[i + 8] != '1')
			|| (argv[i + 8] == '4' && argv[i] != '1'))
			return (0);
		i += 2;
	}
	i = 16;
	while (i <= 22)
	{
		if ((argv[i] == '4' && argv[i + 8] != '1')
			|| (argv[i + 8] == '4' && argv[i] != '1'))
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_check(char *argv)
{
	char	n;

	n = '4';
	if (argv[0] == n && (argv[2] == n || argv[4] == n || argv[6] == n))
		return (0);
	if (argv[8] == n && (argv[10] == n || argv[12] == n || argv[14] == n))
		return (0);
	if (argv[16] == n && (argv[18] == n || argv[20] == n || argv[22] == n))
		return (0);
	if (argv[24] == n && (argv[26] == n || argv[28] == n || argv[30] == n))
		return (0);
	if (ft_check_angles(argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_check_4and1(argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

void	ft_create_tab(char *argv, int counter)
{
	int	i;
	int	j;
	int	tab[4][4];

	i = 0;
	j = 0;
	while (i <= 3)
	{
		while (j <= 3)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	ft_rush(argv, tab, counter);
}

int	main(int argc, char **argv)
{
	int	counter_sp;
	int	counter_nb;

	counter_sp = 0;
	counter_nb = 0;
	if (argc != 2 || ft_check(argv[1]) == 0)
		return (0);
	while (argv[1][counter_sp + counter_nb])
	{
		if (argv[1][counter_sp + counter_nb] >= '1'
			&& argv[1][counter_sp + counter_nb] <= '4')
			counter_nb++;
		else if (argv[1][counter_sp + counter_nb] == ' ')
			counter_sp++;
		else
			return (0);
	}
	if (counter_nb != 16 || counter_sp != 15)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_create_tab(argv[1], 0);
	return (0);
}
