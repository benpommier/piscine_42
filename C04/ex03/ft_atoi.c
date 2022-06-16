/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:09:21 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 11:09:27 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	counter;
	int	minus;
	int	resultat;

	counter = 0;
	minus = 0;
	resultat = 0;
	while ((9 <= str[counter] && str[counter] <= 13)
		|| str[counter] == 32)
		counter++;
	while (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			minus++;
		counter++;
	}
	while (48 <= str[counter] && str[counter] <= 57)
	{
		resultat = resultat * 10 + str[counter] - 48;
		counter++;
	}
	if (minus % 2 == 1)
		resultat = -resultat;
	return (resultat);
}
