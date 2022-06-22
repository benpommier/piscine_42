/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:42:05 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/14 11:42:13 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		resultat = resultat * nb;
		nb--;
	}
	return (resultat);
}
