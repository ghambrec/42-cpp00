/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_search.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:14:46 by ghambrec          #+#    #+#             */
/*   Updated: 2025/12/01 14:14:47 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int extract_index(const std::string& str, int count)
{
    int index;
    static const std::regex REGEX_INDEX("^[1-8]{1}$");

    if (!std::regex_match(str, REGEX_INDEX))
    {
        std::cout << "--- Invalid input! Try again - only one number between 1 and " << count << " allowed. ---\n";
        return (-1);
    }
    index = std::stoi(str);
    if (index < 1 || index > count)
    {
        std::cout << "--- Invalid input! Try again - only one number between 1 and " << count << " allowed. ---\n";
        return (-1);
    }
    return (index - 1);
}

void PhoneBook::search(void)
{
	int			index = -1;
	std::string	input;

	if (count_ == 0)
	{
        std::cout << "--- No contacts added, please add a contact before you search. ---\n";
		return ;
	}
    // ### TABLE ###
	std::cout << std::setfill ('-') << std::setw (COLUMN_WIDTH * 4 + 6) << "\n";
	std::cout << std::setfill (' ');
	// Header
	std::cout << "|" << std::setw(COLUMN_WIDTH) << "Index"; 
	std::cout << "|" << std::setw(COLUMN_WIDTH) << "First Name"; 
	std::cout << "|" << std::setw(COLUMN_WIDTH) << "Last Name"; 
	std::cout << "|" << std::setw(COLUMN_WIDTH) << "Nickname" << "|\n"; 
	std::cout << std::setfill ('-') << std::setw (COLUMN_WIDTH * 4 + 6) << "\n";
	std::cout << std::setfill (' ');
	// Data
	for (int i = 0; i < count_; i++)
	{
		std::cout << "|" << std::setw(COLUMN_WIDTH) << i + 1 << "|";
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

    // ### CONTACT ###
	while (index == -1)
	{
		std::cout << "Which contact do you want to see? Please enter the index number.\n";
		std::cout << "> ";
		std::getline(std::cin, input);
		check_eof();
		index = extract_index(input, count_);
	}
	std::cout << "First Name:     " << contacts_[index].get_info(FIRST_NAME) << "\n";
	std::cout << "Last Name:      " << contacts_[index].get_info(LAST_NAME) << "\n";
	std::cout << "Nickname:       " << contacts_[index].get_info(NICKNAME) << "\n";
	std::cout << "Phone Number:   " << contacts_[index].get_info(PHONE_NUMBER) << "\n";
	std::cout << "Darkest Secret: " << contacts_[index].get_info(SECRET) << "\n\n";
}
