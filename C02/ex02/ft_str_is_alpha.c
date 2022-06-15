/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:39:19 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/13 14:39:23 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (65 <= str[counter] && str[counter] <= 90)
			counter++;
		else if (97 <= str[counter] && str[counter] <= 122)
			counter++;
		else
			return (0);
	}
	return (1);
}
