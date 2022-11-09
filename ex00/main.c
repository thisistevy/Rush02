/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:23:37 by jode-bri          #+#    #+#             */
/*   Updated: 2022/10/02 18:23:40 by jode-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**alloc_tab(char *str);
void	fill_tab(char **tab, char *str);
void	dispatch(int fd, char **tab);
void	ft_putstr(char *str);

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int	main(int argc, char ** argv)
{
	char	**tab;
	int	fd;
	char	*nb;
	

	if (argc != 2 || argc != 3)
	{
		ft_putstr("Usage: {Dictionnaire}:Optionnel {nb}\n");
		return (0);
	}
	if (argc == 2)
	{
		fd = open("./numbers.dict", O_RDONLY);
		nb = argv[1];
	}
	if (argc == 3)
	{
        	fd = open(argv[1], O_RDONLY);
		nb = argv[2];
	}
	if (fd == 0)
                ft_putstr("Error\n");
	tab = alloc_tab(nb);
	fill_tab(tab, nb);
	dispatch(fd, tab);
	close(fd);
	free(tab);
	return (0);
}
