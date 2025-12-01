/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:14:39 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 14:14:40 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void check_eof(void)
{
    if (std::cin.eof())
    {
        std::cout << "\nYou pressed STRG+D, PhoneBook will close.\n";
        exit(EXIT_SUCCESS);
    }
}
