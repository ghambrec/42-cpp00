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

Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string Contact::get_info(int key) const
{
	return (info_[key]);
}

void Contact::set_info(std::string str, int key)
{
	info_[key] = str;
}
