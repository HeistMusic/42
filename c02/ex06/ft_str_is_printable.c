/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:39:48 by luis-rod          #+#    #+#             */
/*   Updated: 2023/07/17 13:41:31 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] >= 32 && str[i] <= 126)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
