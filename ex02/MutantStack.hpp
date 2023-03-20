/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:49:59 by adiouane          #+#    #+#             */
/*   Updated: 2023/03/18 19:32:50 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(void)
    {
        return std::stack<T>::c.begin();
    }
    iterator end(void)
    {
        return std::stack<T>::c.end();
    }
    const_iterator begin(void) const
    {
        return std::stack<T>::c.begin();
    }
    const_iterator end(void) const
    {
        return std::stack<T>::c.end();
    }
    reverse_iterator rbegin(void)
    {
        return std::stack<T>::c.rbegin();
    }
    reverse_iterator rend(void)
    {
        return std::stack<T>::c.rend();
    }
    const_reverse_iterator rbegin(void) const
    {
        return std::stack<T>::c.rbegin();
    }
    const_reverse_iterator rend(void) const
    {
        return std::stack<T>::c.rend();
    }
};

#endif
