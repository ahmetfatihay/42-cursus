/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aay <42istanbul.com.tr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:36:45 by aay               #+#    #+#             */
/*   Updated: 2022/02/02 15:36:48 by aay              ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>

int	main()
{
	char	*s = "meryem altundal";
	size_t	n = 6;
	ft_bzero(s, n);
	printf("%s\n", s);
	return 0;
}
*/
