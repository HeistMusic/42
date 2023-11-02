/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:44:42 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/26 12:32:24 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n && (s1[i] && s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}
