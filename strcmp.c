#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int diff;

	diff = 0;
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
	{	
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		diff = *s1 - *s2;
	return (diff);
}

int		main()
{
 char str[] = "Bhiuyan";
 char to_find[] = "Bh";
 
 printf("%d\n", ft_strcmp(str, to_find));
  printf("%d\n", strcmp(str, to_find));
 return(0);
}