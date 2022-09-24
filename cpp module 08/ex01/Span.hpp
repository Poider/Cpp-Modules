#ifndef Span_
#define Span_

#include <iostream>
#include <string>
#include <set>
#include <cmath>

class Span{
    unsigned int N;
    std::multiset<int> _set;
    unsigned int elementsNumber;
    public:
    Span();
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    class MaxNumbersReached : public std::exception {
        public:
        const char *what() const _NOEXCEPT;
    };

    class SetTooShort : public std::exception {
        public:
        const char *what() const _NOEXCEPT;
    };
    void addNumber(int number);
    int shortestSpan();
    int longestSpan();
    void add_multiple(int arr[], int arrElements);
    void print() const;
};

#endif