/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:53:42 by wiljimen          #+#    #+#             */
/*   Updated: 2023/07/25 20:02:40 by wiljimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	sub;

	i = 0;
	sub = max - min;
	arr = malloc(sizeof(int) * sub);
	if (min >= max)
		return (0);
	if (!arr)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	min = 1;
	int	max = 5;
	int *res = ft_range(min, max);
	printf("%d %d %d %d\n", res[0], res[1], res[2], res[3]);
}*/
