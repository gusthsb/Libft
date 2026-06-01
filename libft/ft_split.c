/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustde-s <gustde-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:37:50 by gustde-s          #+#    #+#             */
/*   Updated: 2026/06/01 18:08:49 by gustde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (s[0] != c)
		j++;
	i = 1;
	while (s[i])
	{
		if (s[i] != c && s[i -1] == c)
			j++;
		i++;
	}
	return (j);
}

size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	free_res(char **res, size_t j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
}

char	**fill_split(char **res, char const *s, char c, size_t cw)
{
	size_t	j;
	size_t	i;
	size_t	wl;

	i = 0;
	j = 0;
	while (j < cw)
	{
		while (s[i] == c)
			i++;
		wl = word_len(s + i, c);
		res[j] = (char *)malloc(wl + 1);
		if (!res[j])
		{
			free_res(res, j);
			return (NULL);
		}
		ft_strlcpy(res[j], s + i, wl + 1);
		j++;
		i += wl;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	cw;
	char	**res;

	if (s == 0 || s[0] == '\0')
		return (NULL);
	cw = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (cw + 1));
	if (!res)
		return (NULL);
	res = fill_split(res, s, c, cw);
	if (!res)
		return (NULL);
	res[cw] = NULL;
	return (res);
}

int	main(void)
{
	char	str1[] = ",,Ola,,mundo,z,a,";
	char	char1 = ',';
	char	**res;
	size_t	i;

	i = 0;
	res = ft_split(str1, char1);
	while (res[i])
	{
		printf("%s  [%zu]\n", res[i], i + 1);
		i++;
	}
	return (0);
}