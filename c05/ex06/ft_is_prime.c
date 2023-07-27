/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:37:15 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/26 19:53:34 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j <= nb)
	{
		if (nb % j == 0)
		{
			i++;
		}
		j++;
	}
	if (i == 2)
		return (1);
	else
		return (0);
}