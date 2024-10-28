/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihalim <ihalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:33:06 by ihalim            #+#    #+#             */
/*   Updated: 2024/10/22 10:33:07 by ihalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = 0;
	dst_len = ft_strlen(dst);
	while (src[src_len])
		dst[dst_len++] = src[src_len++];
	dst[dst_len] = '\0';
	return (dst);
}
