/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 15:47:04 by aborda            #+#    #+#             */
/*   Updated: 2025/08/04 19:04:34 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#ifndef TEST_H
# define TEST_H

typedef struct s_test
{
	const char	*actual;
	const char	*label;
}	t_test;

void	assert_eq_int_logical(int expected, int actual, const char *label);
void	assert_eq_int(int expected, int actual, const char *label);
void	assert_eq_size_t(size_t expected, size_t actual, const char *label);
void	assert_eq_char(char *expected, char *actual, const char *label);
void	assert_eq_str(const char *expected, const char *actual,
			const char *label);

#endif
