/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycucchi <yoan066@yahoo.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:06:21 by ycucchi           #+#    #+#             */
/*   Updated: 2021/11/08 19:07:05 by ycucchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int(*f)(char *))
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}
