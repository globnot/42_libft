/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:47:04 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 09:28:36 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "libft.h"
# include <stdio.h>
# include <string.h>
# include <ctype.h>

typedef struct s_test_char
{
	const char	*actual;
	const char	*label;
}	t_test_char;

typedef struct s_test_int
{
	int			actual;
	const char	*label;
}	t_test_int;

/*
 * assert
*/
void	assert_eq_int_logical(int expected, int actual, const char *label);
void	assert_eq_int(int expected, int actual, const char *label);
void	assert_eq_size_t(size_t expected, size_t actual, const char *label);
void	assert_eq_char(char *expected, char *actual, const char *label);
void	assert_eq_str(const char *expected, const char *actual,
			const char *label);

/*
 * test
*/
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_strlen(void);
void	test_ft_strlcpy(void);
void	test_ft_atoi(void);

#endif
