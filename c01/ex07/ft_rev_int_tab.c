/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:43:35 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/15 15:46:03 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	size--;
	while (i < size)
	{
		j = tab[i];
		tab[i] = tab[size];
		tab[size] = j;
		i++;
		size--;
	}
}
