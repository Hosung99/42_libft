/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoson <seoson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:27:29 by seoson            #+#    #+#             */
/*   Updated: 2023/03/14 15:57:13 by seoson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	*save;

	i = 0;
	save = (unsigned char *)b;
	while (i < len)
	{
		save[i++] = (unsigned char)c;
	}
	return (b);
}
