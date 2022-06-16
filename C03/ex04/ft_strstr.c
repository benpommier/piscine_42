/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:31:36 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/12 12:32:18 by bpommier         ###   ########.fr       */
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

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	counter;
	unsigned int	len_find;

	len_find = ft_strlen(to_find);
	counter = 0;
	if (*to_find == '\0')
		return (str);
	while (str[counter] != '\0')
	{
		if (ft_strncmp(&str[counter], &to_find[0], len_find) == 0)
			return (str + counter);
		counter++;
	}
	return (0);
}
