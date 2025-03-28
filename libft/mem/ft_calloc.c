/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bama <bama@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:09:52 by ymanchon          #+#    #+#             */
/*   Updated: 2025/03/15 12:48:50 by bama             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t type_size)
{
	void	*ret;
	size_t	size;

	size = nmemb * type_size;
	if (nmemb != 0 && size / nmemb != type_size)
		return (NULL);
	ret = malloc(size);
	if (!ret)
		return (NULL);
	ret = ft_memset(ret, 0, size);
	return (ret);
}
