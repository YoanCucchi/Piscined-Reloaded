/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycucchi <yoan066@yahoo.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:55:13 by ycucchi           #+#    #+#             */
/*   Updated: 2021/11/03 17:40:37 by ycucchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	range = (int *)malloc(sizeof(int) * (len + 1));
	while (len >= 0)
	{
		range[i] = min;
		i++;
		min++;
		len--;
	}
	return (range);
}
