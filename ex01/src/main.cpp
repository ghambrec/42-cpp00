/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:27:58 by ghambrec          #+#    #+#             */
/*   Updated: 2025/11/27 15:31:11 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook	pb;

	input = "";
	std::cout << "Welcome to the PhoneBook\n";
	while (input != "EXIT")
	{
		std::cout << "Please enter a command (ADD, SEARCH, EXIT)\n";
		std::cout << "> ";
		std::getline(std::cin, input);
		check_eof();
		if (input == "ADD")
			pb.add_contact();
		else if (input == "SEARCH")
			pb.search();
	}
	return (EXIT_SUCCESS);
}
