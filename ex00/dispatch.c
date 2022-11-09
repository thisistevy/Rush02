/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 14:57:52 by jode-bri          #+#    #+#             */
/*   Updated: 2022/10/02 17:55:16 by jode-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_unit(int i, int j);
void 	find_numbers(int fd, char *str);

void	cas_particulier(int fd, char dizaine, char unite)
{
	char	str2[2];
	char	str1[1];


	if (dizaine == '0')
	{
		(void)str2;
		str1[0] = unite;
		str1[1] = '\0';
		find_numbers(fd, str1);
	}
	else
	{
		(void)str1;
		str2[0] = dizaine;
		str2[1] = unite;
		str2[2] = '\0';
		find_numbers(fd, str2);
	}
}

void	decomp(int fd, char *str, int lig, int col)
{
	int	i;
	char	test[100];

	i = -1;
	while (str[++i])
	{
		if (str[i] == '0')
			i++;
		if (i == 0)
		{
			find_numbers(fd, str[i] + "");
			find_numbers(fd, "100");
		}
		if (i == 1 && str[i] >= '2')
			find_numbers(fd, str[i] + "0");
		else if ( i == 1 && str[i] <= '1')
		{
			cas_particulier(fd, str[1], str[2]);
			break;
		}
		if (i == 2)
			find_numbers(fd, str[i] + "");
		check_unit(lig, col);
	}
}

void	dispatch(int fd, char **tab)
{
	int	a;
	int	i;
	int	j;
	char 	str[3];

	i = -1;
	j = -1;
	while (tab[++i])
	{}
	while (tab[i - 1][++j])
	{}
	a = 0;
	str[j] = '\0';
	while (--i >= 0)
	{
		while (tab[i][--j])
		{
			str[a++]=tab[i][j];
		}
		decomp(fd, str, i, j);
		str[3] = '\0';
		j = 3;
		a = 0;
	}
}
