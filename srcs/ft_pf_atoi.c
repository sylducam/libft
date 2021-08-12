/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylducam <sylducam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:03:35 by sylducam          #+#    #+#             */
/*   Updated: 2021/08/12 17:39:10 by sylducam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header_libft.h"

int	ft_pf_atoi(char **str)
{
	int	total;
	int	sign;

	total = 0;
	sign = 1;
	while ((*(*str) >= 9 && *(*str) <= 13) || *(*str) == 32 || *(*str) == ','
		|| ft_isalpha(*(*str)))
		(*str)++;
	if (*(*str) == '+' || *(*str) == '-')
	{
		if (*(*str) == '-')
			sign *= -1;
		(*str)++;
	}
	while (ft_isdigit(*(*str)))
	{
		total = (total * 10) + *(*str) - '0';
		(*str)++;
	}
	return (total);
}
