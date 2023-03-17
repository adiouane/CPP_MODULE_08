#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    // my test
    /*
        Span sp2 = Span(10000);

        for (int i = 0; i < 10000; i++)
        {
            sp2.addNumber(i);
        }
        std::cout << sp2.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
        // if we add more the N number, we will get an exception
        try {
            sp2.addNumber(10001);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        // tst
        Span sp3 = Span(1);
        // sp3.addNumber(5);
        try {
            std::cout << sp3.shortestSpan() << std::endl;
            std::cout << sp3.longestSpan() << std::endl;
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        return 0;
        */
}
