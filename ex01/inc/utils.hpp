/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:14:53 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 14:14:54 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

constexpr int CONTACT_INFOS_NUM = 5;
constexpr int MAX_CONTACTS = 8;
constexpr int COLUMN_WIDTH = 10;

typedef enum e_contact_infos
{
    FIRST_NAME,
    LAST_NAME,
    NICKNAME,
    PHONE_NUMBER,
    SECRET
} t_contact_infos;

void check_eof(void);
