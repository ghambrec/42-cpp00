/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:01:08 by ghambrec          #+#    #+#             */
/*   Updated: 2025/11/27 15:32:37 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// void set_contact(void);
// void get_contacts(void);

std::string	get_user_input(std::string key)
{
	std::string input;

	input = "";
	std::cout << "Please enter the " + key + "\n";
	std::cout << "> ";
	std::getline(); // hier weitermachen!!
	return (input);
}


void PhoneBook::add_contact(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	first_name = get_user_input("first name");
		
}