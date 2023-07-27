/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:02:46 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/24 20:29:40 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	x;

	x = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		x = x * nb;
		i++;
	}
	return (x);
}
