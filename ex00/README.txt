# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.txt                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-bri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 00:26:25 by jode-bri          #+#    #+#              #
#    Updated: 2022/10/02 00:41:22 by jode-bri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

alloc_tab: OK
	fonction pour allouer un tableau 2d pour ranger nos chiffres.
fill_tab: OK
	rempli le tableau avec la string donner en argument puis l'affiche.
	ne pa oublier d'enlever les prints, for et header.
find_numbers: Wip
	arrive a parser partiellement, petit probleme a regler avec le million.
	a son propre main pour test --> gcc find_numbers.c
					./a.out numbers.dict {nb1} {nb2} ...
					/!\ nb doit etre une entree du dico /!\
main: OK
	basique qui sert a appeler les fonctions.
	a utiliser en compilant alloctab et fill tab --> gcc alloc_tab.c fill_tab.c main.c


Reste a faire:
	verif la chaine de caractere passer en argument
	decomposer le nombre dans le tab** pour le passer a find_numbers en n'omettant pas de l'entremeler avec des putstr de million/trillion etc ... lorsque i change et pour j = 2
	une fonction qui prend en argument i et qui print selon la valeur de i: million, trillion, etc ..
	la meme pour j = 2
