/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphillip <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:31:14 by jphillip          #+#    #+#             */
/*   Updated: 2025/01/24 17:12:24 by jphillip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	if (size != 0)
		if (count > SIZE_MAX / size)
			return (NULL);
	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
