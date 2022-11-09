/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_unit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:40:21 by jode-bri          #+#    #+#             */
/*   Updated: 2022/10/04 12:41:23 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putstr(char *str);

void	check_unit(int i, int j)
{
	if (j == 0 && i == 1)
		ft_putstr(" thousand");
	else if (j == 0 && i == 2)
		ft_putstr(" million");
	else if (j == 0 && i == 3)
		ft_putstr(" billion");
	else if (j == 0 && i == 4)
		ft_putstr(" trillion");
	else if (j == 0 && i == 5)
		ft_putstr(" quadrillion");
	else if (j == 0 && i == 6)
		ft_putstr(" quintillion");
	else if (j == 0 && i == 7)
		ft_putstr(" sextillion");
	else if (j == 0 && i == 8)
		ft_putstr(" septillion");
	else if (j == 0 && i == 9)
		ft_putstr(" octillion");
	else if (j == 0 && i == 10)
		ft_putstr(" nonillion");
	else if (j == 0 && i == 11)
		ft_putstr(" decillion");
	else if (j == 0 && i == 12)
		ft_putstr(" undecillion");
}
