/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:28:55 by aborda            #+#    #+#             */
/*   Updated: 2025/11/20 10:29:28 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsignedint_fd(unsigned int n, unsigned int fd)
{
	if (n >= 10)
		ft_putunsignedint_fd((n / 10), fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
