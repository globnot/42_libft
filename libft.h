/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:45:41 by aborda            #+#    #+#             */
/*   Updated: 2025/08/02 11:53:43 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648

size_t		ft_strlen(const char *s);
void		ft_putchar(char c);
void		ft_putstr(char *s);
void		ft_putnbr(int nb);
void		ft_swapint(int *a, int *b);
void		ft_swapstr(char **s1, char **s2);
char		*ft_strdup(const char *s);
int			ft_isalpha_lower(char c);
int			ft_isalpha_upper(char c);
int			ft_isalpha(char c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);

#endif
