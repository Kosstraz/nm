/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfree.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanchon <ymanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:38:33 by bama              #+#    #+#             */
/*   Updated: 2024/11/17 17:30:11 by ymanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dfree(void **ptr2)
{
	int	i;

	if (ptr2)
	{
		i = 0;
		while (ptr2[i])
			free(ptr2[i++]);
		free(ptr2);
	}
}
