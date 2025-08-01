/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:45:41 by aborda            #+#    #+#             */
/*   Updated: 2025/08/01 13:05:58 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648

size_t		ft_strlen(char const *str);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
void		ft_putnbr(int nb);
void		ft_swapint(int *a, int *b);
void		ft_swapstr(char **s1, char **s2);
char		*ft_strdup(char *src);

#endif
