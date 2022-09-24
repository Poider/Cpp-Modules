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


    // Span sp = Span(5);
    
    // sp.addNumber(22);
    // sp.addNumber(23);
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};

    // sp.add_multiple(arr, 3);
    // sp.print();
    
    return 0;
}