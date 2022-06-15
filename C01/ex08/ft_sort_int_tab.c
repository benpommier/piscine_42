/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:16:56 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/09 19:24:53 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	counter;

	counter = 0;
	size -= 1;
	while (counter <= size)
	{
		if (tab[counter] > tab[counter + 1])
		{
			temp = tab[counter];
			tab[counter] = tab[counter + 1];
			tab[counter + 1] = temp;
			counter = 0;
		}
		counter++;
	}
}
