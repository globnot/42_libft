/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 10:41:05 by aborda            #+#    #+#             */
/*   Updated: 2025/08/03 11:32:04 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (nb == FT_INT_MIN)
	{
		ft_putstr_fd("-2147483648", 1);
		return ;
	}
	else if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar_fd('-', 1);
	}
	if (nb >= 10)
		ft_putnbr_fd((nb / 10), 1);
	ft_putchar_fd(((nb % 10) + '0'), 1);
}
