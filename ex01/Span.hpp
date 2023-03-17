/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:49:48 by adiouane          #+#    #+#             */
/*   Updated: 2023/03/17 19:15:30 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _nums;
    public:
        Span();
        ~Span();
        Span(Span const & src);
        Span & operator=(Span const & rhs);

        Span(unsigned int N);

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
};

#endif