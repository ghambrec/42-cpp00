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

void PhoneBook::add_dummy_contacts(void) 
{
	std::string dummy_data[3][5] = {
		{"Alice", "Smith", "Ally", "123456", "Loves pizza"},
		{"genauzehnX", "Johnson", "Bobby", "654321", "Afraid of spiders"},
		{"mehralszehnX", "Brown", "Chuck", "987654", "Secretly writes poems"}
	};

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			contacts_[next_index_].set_info(dummy_data[i][j], j);
		}
		next_index_ = (next_index_ + 1) % 8;
		if (count_ < 8) count_++;
	}
}

PhoneBook::PhoneBook()
	: next_index_(0), count_(0)
{}

PhoneBook::~PhoneBook() {}

static bool validate_input(const std::string& input, int key)
{
	static const std::regex REGEX_NAME("^[A-Za-z-]+$");
	static const std::regex REGEX_NUMBER("^\\+?[0-9][0-9 -]{2,}$");
	static const std::regex REGEX_SECRET("^.+$");

	if (key == FIRST_NAME || key == LAST_NAME || key == NICKNAME)
	{
		if (!std::regex_match(input, REGEX_NAME))
		{
			std::cout << "--- Invalid input! Try again - only characters allowed. ---\n";
			return (false);
		}
	}
	else if (key == PHONE_NUMBER)
	{
		if (!std::regex_match(input, REGEX_NUMBER))
		{
			std::cout << "--- Invalid input! Try again - only numbers, space and hyphers and minimum three numbers. ---\n";
			return (false);
		}
	}
	else if (key == SECRET)
	{
		if (!std::regex_match(input, REGEX_SECRET))
		{
			std::cout << "---Invalid input! Try again - minimum one character. ---\n";
			return (false);
		}
	}
	return (true);
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
		contacts_.at(next_index_).set_info(get_user_input(i), i);
	}
	next_index_ = (next_index_ + 1) % MAX_CONTACTS;
	if (count_ < MAX_CONTACTS)
		count_++;
}

void PhoneBook::search(void)
{
	add_dummy_contacts();

	std::cout << std::setfill ('-') << std::setw (COLUMN_WIDTH * 4 + 6) << "\n";
	std::cout << std::setfill (' ');
	for (int i = 0; i < count_; i++)
	{
		std::cout << "|" << std::setw(COLUMN_WIDTH) << i << "|";

		for (int j = FIRST_NAME; j <= NICKNAME; j++)
		{
			std::cout << std::setw(COLUMN_WIDTH);
			std::string val = contacts_[i].get_info(j);
			if (val.length() > COLUMN_WIDTH)
				std::cout << val.substr(0, COLUMN_WIDTH - 1) + ".";
			else
				std::cout << val;
			std::cout << "|";
		}
		std::cout << "\n";
	}
	std::cout << std::setfill ('-') << std::setw (COLUMN_WIDTH * 4 + 6) << "\n";
	std::cout << std::setfill (' ');
}
