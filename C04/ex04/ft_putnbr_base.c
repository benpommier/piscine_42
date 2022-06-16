/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 23:02:14 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/10 16:42:51 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base, int len_base)
{
	int	counter;
	int	counter_doublon;

	counter = 0;
	if (len_base <= 1)
		return (0);
	while (base[counter])
	{
		counter_doublon = counter + 1;
		if (base[counter] == '+' || base[counter] == '-')
			return (0);
		if (base[counter] < 32 && base[counter] > 126)
			return (0);
		while (base[counter_doublon])
		{
			if (base[counter_doublon] == base[counter])
				return (0);
			counter_doublon++;
		}
		counter++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (check_base(base, len_base) == 0)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('0');
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
	}
	else if (nbr >= len_base)
	{
		ft_putnbr_base(nbr / len_base, base);
		ft_putnbr_base(nbr % len_base, base);
	}
	else
		ft_putchar(base[nbr]);
}
