/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 10:30:09 by adores            #+#    #+#             */
/*   Updated: 2025/04/05 10:30:09 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char    *dup;
    int     i;

    i = 0;
    while(src[i] != '\0')
        i++;
    dup = malloc(sizeof(char) * (i +1));
    if(dup == NULL)
        return (NULL);
    i = 0;
    while(src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}

#include <stdio.h>
int main(void)
{
    char *original = "Hello";
    char *copy = ft_strdup(original);

    printf("Original: %s\n", original);
    printf("Cópia: %s\n", copy);
    free(copy);
}
