/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tab_nb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:37:26 by sylducam          #+#    #+#             */
/*   Updated: 2021/11/17 23:51:11 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_libft.h"

int	is_tab_nb(char **tab)
{
	int	i;
	int	j;

	i = 1;
	while (tab[i])
	{
		j = 0;
		if (tab[i][j] == '-' || tab[i][j] == '+')
			j++;
		while (tab[i][j])
		{
			if (ft_isdigit(tab[i][j++]) == 0)
				return (-1);
		}
		// if (i == INT_MAX && tab[INT_MAX + 1] != 0)
			// return (-1);
		i++;
	}
	return (0);
}
