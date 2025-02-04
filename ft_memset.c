/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphillip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:59:10 by jphillip          #+#    #+#             */
/*   Updated: 2025/01/24 14:59:42 by jphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*p;

	p = dest;
	while (count > 0)
	{
		*p = (unsigned char)c;
		p++;
		count--;
	}
	return (dest);
}
