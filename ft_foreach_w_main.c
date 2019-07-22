/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 05:45:04 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/09/04 06:02:45 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;
	
	i = 0;
	while (i < length)
	{
		f (tab[i]);
		i++;
	}
	return (0);
}

void	putnbr(int num)
{
	printf("%i", num);
}

int		main()
{
	int array[4] = {4, 5, 6, 7};
	ft_foreach(array, 4, &putnbr);
	return (0);
}

