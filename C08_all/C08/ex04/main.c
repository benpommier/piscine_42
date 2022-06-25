/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpommier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:18:53 by bpommier          #+#    #+#             */
/*   Updated: 2022/06/25 11:18:55 by bpommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str		*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}
