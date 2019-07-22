/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 02:09:30 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/08/25 04:59:10 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	if (nb < 0 || nb >= 10)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		res = nb;
		while (i < 10)
		{
			res = res * nb;;
			i++;
		}
	}
	return (res);
}

int		main(void)
{
	printf("Factorial -55 = %d\n", ft_iterative_factorial(-55));
	printf("Factorial 38 = %d\n", ft_iterative_factorial(38));
	printf("Factorial 0 = %d\n", ft_iterative_factorial(0));
	printf("Factorial 1 = %d\n", ft_iterative_factorial(1));
	printf("Factorial 2 = %d\n", ft_iterative_factorial(2));
	printf("Factorial 5 = %d\n", ft_iterative_factorial(5));
	printf("Factorial 9 = %d\n", ft_iterative_factorial(9));
	return (0);
}
