/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aay <42istanbul.com.tr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:39:34 by aay               #+#    #+#             */
/*   Updated: 2022/02/02 15:39:35 by aay              ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	int a;
	
	a = 41;
	printf("%d \n", ft_isprint(a));
	printf("%d \n", isprint(a));
	return 0;
}
*/
