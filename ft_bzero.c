/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jawatter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 22:15:13 by jawatter          #+#    #+#             */
/*   Updated: 2018/11/10 17:07:17 by jawatter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s1, size_t n)
{
	size_t x;

	x = 0;
	while (x < n)
	{
		((char *)s1)[x] = 0;
		x++;
	}
}