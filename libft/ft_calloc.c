/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aay <42istanbul.com.tr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:37:03 by aay               #+#    #+#             */
/*   Updated: 2022/02/02 15:37:06 by aay              ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;	

	str = (void *) malloc(size * count);
	if (!str)
		return (0);
	ft_memset(str, 0, (size * count));
	return (str);
}
/*
#include <stdio.h>
int main()
{
	size_t a = 5;
	size_t b = 4;

	printf("%s \n", ft_calloc(a, b));
	return 0;
}*/
