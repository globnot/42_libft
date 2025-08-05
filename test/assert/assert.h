/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborda <aborda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:59:16 by aborda            #+#    #+#             */
/*   Updated: 2025/08/05 18:01:50 by aborda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSERT_H
# define ASSERT_H

void	assert_eq_int_logical(int expected, int actual, const char *label);
void	assert_eq_int(int expected, int actual, const char *label);
void	assert_eq_size_t(size_t expected, size_t actual, const char *label);
void	assert_eq_char(char *expected, char *actual, const char *label);
void	assert_eq_str(const char *expected, const char *actual,
			const char *label);
void	assert_eq_ptr(void *expected, void *actual, const char *label);

#endif
