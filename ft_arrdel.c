/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelnych <imelnych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 12:46:12 by imelnych          #+#    #+#             */
/*   Updated: 2018/03/21 12:20:30 by imelnych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrdel(char ***arr)
{
	char	**tmp;

	tmp = *arr;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(*arr);
	*arr = NULL;
}
