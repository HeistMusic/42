/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:32:55 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/23 18:17:26 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nb)
{
	int		i;
	int		j;
	int		len_c;
	char	c[11];
	char	swap;

	i = 0;
	while (nb > 0)
	{
		c[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	j = i - 1;
	len_c = i;
	i = 0;
	while (i < (len_c / 2))
	{
		swap = c[i];
		c[i] = c[j];
		c[j] = swap;
		i++;
		j--;
	}
	write(1, &c[0], len_c);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		putnbr(nb);
	}
}
