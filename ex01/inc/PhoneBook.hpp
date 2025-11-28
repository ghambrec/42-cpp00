/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:15:46 by ghambrec          #+#    #+#             */
/*   Updated: 2025/11/27 15:08:24 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <array>
#include <regex>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		std::array<Contact, 8> contacts_;
		int		next_index_;
		int		count_;

	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(void);
		void search(void);
		void add_dummy_contacts(void);
};
