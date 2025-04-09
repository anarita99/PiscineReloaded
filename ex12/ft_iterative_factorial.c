/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 14:02:19 by adores            #+#    #+#             */
/*   Updated: 2025/04/09 11:00:48 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 13)
		return (0);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(14));
} */