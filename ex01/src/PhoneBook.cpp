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

PhoneBook::PhoneBook()
	: next_index_(0), count_(0)
{}

PhoneBook::~PhoneBook() {}

static bool validate_input(const std::string& input, int key)
{
	
}

static std::string get_user_input(int key)
{
	std::string contact_keys[CONTACT_INFOS_NUM] = {"first name", "last name", "nickname", "phone number", "darkest secret"};
	std::string input;
	bool 		input_correct;

	input = "";
	input_correct = false;
	while (!input_correct)
	{
		std::cout << "Please enter the " + contact_keys[key] + "\n";
		std::cout << "> ";
		std::getline(std::cin, input);
		check_eof();
		input_correct = validate_input(input, key);
	}
	return (input);
}

void PhoneBook::add_contact(void)
{
	for (int i = 0; i < CONTACT_INFOS_NUM; i++)
	{
		contacts_[next_index_].set_info(get_user_input(i), i);
	}
	next_index_ = (next_index_ + 1) % MAX_CONTACTS;
	if (count_ < MAX_CONTACTS)
		count_++;

	std::cout << count_ << std::endl;
}
