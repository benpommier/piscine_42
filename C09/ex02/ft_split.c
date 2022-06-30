/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:59:27 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/27 17:59:28 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char s1, char *s2);

int	ft_lendup(char *src, char *charset, int n)
{
	int	i;

	i = 0;
	while (src[n + i] != '\0')
	{
		if (ft_strcmp(src[n + i], charset) == 1)
			return (i);
		i++;
	}
	return (i - 1);
}

char	*ft_strndup(char *src, char *charset, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(*src) * (ft_lendup(src, charset, n) + 1));
	while (src[n + i] != '\0')
	{
		if (ft_strcmp(src[n + i], charset) == 0)
			dest[i] = src[n + i];
		else
		{
			dest[i] = '\0';
			printf(" dup %s\n", dest);
			return (dest);
		}
		i++;
	}	
	dest[i] = '\0';
	printf(" dup2 %s\n", dest);
	return (dest);
}

int	ft_strcmp(char s1, char *s2)
{
	int	j;

	j = 0;
	while (s2[j])
	{
		if (s2[j] == s1)
			return (1);
		j++;
	}
	return (0);
}

int	ft_malloc(char *str, char *charset)
{
	int	counter;
	int	j;
	int	nb_word;

	counter = 0;
	j = 0;
	nb_word = 0;
	while (str[counter] != '\0')
	{
		if (ft_strcmp(str[counter], charset) == 0)
			j++;
		else
		{
			if (j != 0)
			{
				j = 0;
				nb_word++;
			}
		}
		counter++;
	}
	if (j != 0)
		nb_word++;
	return (nb_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		i;
	int		nb_word;

	i = 0;
	nb_word = ft_malloc(str, charset);
	dest = malloc(sizeof(char *) * (ft_malloc(str, charset) + 1));
	if (!dest)
		return (0);
	while (nb_word > 0)
	{
		if (ft_strcmp(str[i], charset) == 0)
		{
			*dest = malloc(sizeof(char) * (i + 1));
			*dest = ft_strndup(str, charset, i);
			i += ft_lendup(str, charset, i) - 1;
			nb_word--;
		}
		i++;
	}
	*dest = 0;
	printf(" dup2 %s\n", *dest);
	return (dest);
}
