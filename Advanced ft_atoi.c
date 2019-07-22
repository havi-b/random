/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbhuiyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 21:31:47 by hbhuiyan          #+#    #+#             */
/*   Updated: 2018/08/28 15:22:59 by hbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_isspace(char c)
{
	if (c == '\t' || c =='\n' || c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int x;
	int res;
	int neg;

	x = 0;
	res = 0;
	neg = 1;
	while (!(str[x] <= '9' && str[x] >= '0'))
	{
		if (str[x] == '-')
			neg = -1;
		x++;
	}
	while ((str[x] <= '9') && (str[x] >= '0'))
	{
		res = res * 10 + str[x] - '0';
		x++;
		while (str[x] && (!(str[x] <= '9' && str[x] >= '0')))
		{
			x++;
		}
	}
	return (res * neg);
}

int		main()
{
	printf("ft_atoi: %d\n", ft_atoi(" 1 2 jsbfkajw  3 4 5"));
	printf("ft_atoi: %d\n", ft_atoi("--123456"));
	printf("ft_atoi; %d\n", ft_atoi("42 is awesome!"));
	return (0);
}
