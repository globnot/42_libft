/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:47:04 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 12:14:18 by aborda           ###   ########.fr       */
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

typedef struct s_test_memset
{
	char		s[20];
	int			c;
	size_t		n;
	const char	*label_return;
	const char	*label_buffer;
}	t_test_memset;

/*
 * assert
*/
void	assert_eq_int_logical(int expected, int actual, const char *label);
void	assert_eq_int(int expected, int actual, const char *label);
void	assert_eq_size_t(size_t expected, size_t actual, const char *label);
void	assert_eq_char(char *expected, char *actual, const char *label);
void	assert_eq_str(const char *expected, const char *actual,
			const char *label);
void	assert_eq_ptr(void *expected, void *actual, const char *label);

/*
 * test
*/
void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_isascii(void);
void	test_ft_isprint(void);
void	test_ft_strlen(void);
void	test_ft_memset(void);
void	test_ft_strlcpy(void);
void	test_ft_atoi(void);

#endif
