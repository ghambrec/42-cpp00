/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghambrec <ghambrec@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:22:21 by ghambrec          #+#    #+#             */
/*   Updated: 2025/11/27 15:10:28 by ghambrec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "utils.hpp"

class Contact
{
	private:
		std::string	info_[CONTACT_INFOS_NUM];

	public:
		Contact();
		~Contact();
		// getters
		std::string get_info(int key) const;
		// setters
		void set_info(std::string str, int key);
};
