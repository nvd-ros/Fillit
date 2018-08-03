/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:39:47 by rnovodra          #+#    #+#             */
/*   Updated: 2017/11/25 18:26:12 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void		ft_free(char **array)
{
	size_t i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		array[i++] = NULL;
	}
	free(array);
	array = NULL;
}
