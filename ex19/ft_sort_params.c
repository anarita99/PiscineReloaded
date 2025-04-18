/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 13:08:17 by adores            #+#    #+#             */
/*   Updated: 2025/04/07 12:26:28 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		count1;
	int		count2;
	char	*tmp;

	count1 = 1;
	while (count1 < argc)
	{
		count2 = count1 + 1;
		while (count2 < argc)
		{
			if (ft_strcmp(argv[count1], argv[count2]) > 0)
			{
				tmp = argv[count1];
				argv[count1] = argv[count2];
				argv[count2] = tmp;
			}
			count2++;
		}
		ft_putstr(argv[count1]);
		ft_putchar('\n');
		count1++;
	}
}
