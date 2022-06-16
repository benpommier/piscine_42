/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:59:27 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/12 10:21:09 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((s1[counter] || s2[counter]) && counter < n)
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}
