/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:39:48 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:39:51 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (97 <= str[counter] && str[counter] <= 122)
			counter++;
		else
			return (0);
	}
	return (1);
}
