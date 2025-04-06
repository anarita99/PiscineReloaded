/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:00:26 by adores            #+#    #+#             */
/*   Updated: 2025/04/05 11:00:26 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	dif;
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	else
		dif = max - min;
	arr = malloc(sizeof(int) * dif);
	if (arr == NULL)
		return (NULL);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

#include <stdio.h>

int main(void)
{
	int *res;
	int i;

	i = 0;
	res = ft_range(5, 10);
	while (i < 5)
	{
		printf("%d\n", res[i]);
		i++;
	}
}