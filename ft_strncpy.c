/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jawatter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:55:14 by jawatter          #+#    #+#             */
/*   Updated: 2018/11/11 19:00:32 by jawatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n && s2[x])
	{
		s1[x] = s2[x];
		x++;
	}
	while (x < n)
	{
		s1[x] = '\0';
		x++;
	}
	return (s1);
}
