/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:49:45 by adiouane          #+#    #+#             */
/*   Updated: 2023/03/17 01:34:55 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _N = 0;
}

Span::~Span()
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span &Span::operator=(Span const &rhs)
{
    _N = rhs._N;
    _nums = rhs._nums;
    return *this;
}

Span::Span(unsigned int N)
{
    _N = N;
}

void Span::addNumber(int n)
{
    if (_nums.size() < _N)
        _nums.push_back(n);
    else
        throw std::exception();
}

int Span::longestSpan()
{
    if (_nums.size() <= 1)
        throw std::exception();
    std::vector<int> tmp = _nums;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

int Span::shortestSpan()
{
    if (_nums.size() <= 1)
        throw std::exception();
    std::vector<int> tmp = _nums;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size() - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return min;
}
