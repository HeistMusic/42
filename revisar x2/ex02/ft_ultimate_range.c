/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:33:03 by wiljimen          #+#    #+#             */
/*   Updated: 2023/07/25 20:10:59 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sub;
	int	i;
	int	*buffer;

	sub = max - min;
	buffer = malloc(sizeof(int) * sub);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < sub)
	{
		buffer[i] = min + i;
		i++;
	}
	return (sub);
}
/*
int	main(void)
{
	int	i = 0;
	int *tab;
	int	size = ft_ultimate_range(&tab, 1, 5);
	while (i < size)
	{
		printf("%d  ", tab[i]);
		i++;
	}
}*/
