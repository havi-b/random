#include <unistd.h>
#include <stdio.h>

int		existed(char *s1, char *s2, char c, int maxpos)
{
	int i;

	i = -1;
	if (s1 == '\0' || s2 == '\0')
		return (-1);
	while (s1[i] && s2[i] && i < maxpos)
	{
		if (s1[i] == c || s2[i] == c)
			return (1);
		else
			return (0);
		i++;
	}
	return (-1);
}

void	ft_union(char *s1, char *s2)
{
	int i;

	i = -1;
	while (s1[i])
	{
		if (existed(s1, s1, s1[i], i) == 1)
			i++;
		else if (existed(s1, s1, s1[i], i) == 0)
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
	i = -1;
	while (s2[i])
	{
		if (existed(s2, s1, s2[i], i) == 1)
			i++;
		else if (existed(s2, s1, s2[i], i) == 0)
		{
			write(1, &s2[i], 1);
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
}