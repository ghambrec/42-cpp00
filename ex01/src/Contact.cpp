/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:58:14 by ghambrec          #+#    #+#             */
/*   Updated: 2025/11/27 14:13:56 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(void)
{
		
}

Contact::~Contact(void)
{

}

std::string Contact::get_first_name(void) const
{
	return (first_name_);
}

std::string Contact::get_last_name(void) const
{
	return (last_name_);
}

std::string Contact::get_nickname(void) const
{
	return (nickname_);
}

std::string Contact::get_phone_number(void) const
{
	return (phone_number_);
}

std::string Contact::get_secret(void) const
{
	return (secret_);
}

void Contact::set_first_name(std::string str)
{
	first_name_ = str;
}

void Contact::set_last_name(std::string str)
{
	last_name_ = str;
}

void Contact::set_nickname(std::string str)
{
	nickname_ = str;
}

void Contact::set_phone_number(std::string str)
{
	phone_number_ = str;
}

void Contact::set_secret(std::string str)
{
	secret_ = str;
}
