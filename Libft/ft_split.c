/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-rod <luis-rod@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:15:13 by luis-rod          #+#    #+#             */
/*   Updated: 2024/01/21 13:19:30 by luis-rod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	count(char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (!sep(s[i], c) && (sep(s[i + 1], c)
				|| s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	w_str(char **sp, char *s, char c)
{
	int	i;
	int	j;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (sep(s[i], c))
			i++;
		else
		{
			j = 0;
			while (!sep(s[i + j], c) && (s[i + j]))
				j++;
			sp[words] = ft_substr(s, i, j);
			if (sp[words] == NULL)
				return (free_str(sp), 0);
			i += j;
			words++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**r;

	if (!s)
		return (0);
	words = count((char *)s, c);
	r = ft_calloc(words + 1, sizeof(char *));
	if (!r)
		return (0);
	if (!w_str(r, (char *)s, c))
		return (0);
	return (r);
}

/*	char const split[] = "0hola0como0estas0";
	char separador	= '0';
	char **resul = ft_split(split, separador);
	int z = 0;

	if (resul == NULL)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}
	while (resul[z])
	{
		printf("Palabra %d: %s\n", z, resul[z]);
		z++;
	}
	z = 0;
	
	while (resul[z] != NULL)
	{
		free(resul[z]);
		z++;
	}
	free (resul);

	printf("\n");
*/