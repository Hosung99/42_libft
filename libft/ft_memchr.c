/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <seoson@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:58:48 by seoson            #+#    #+#             */
/*   Updated: 2023/03/28 12:09:00 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*casting;
	size_t			i;

	casting = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (casting[i] == (unsigned char)c)
			return ((void *)&casting[i]);
		i++;
	}
	return (0);
}
