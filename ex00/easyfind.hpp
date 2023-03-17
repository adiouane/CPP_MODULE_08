/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:49:20 by adiouane          #+#    #+#             */
/*   Updated: 2023/03/17 19:14:30 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <vector>
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &container_v, int toFind)
{
	typename T::iterator it;

	it = std::find(container_v.begin(), container_v.end(), toFind);
	if (it == container_v.end())
		throw std::exception();
	return (it);
}

#endif
