#include "Span.hpp"

Span::Span()
{
    N = 0;
    elementsNumber = 0;    
    std::cout << "Span : constructor called" << std::endl;
}

Span::Span(unsigned int n)
{
    std::cout << "Span : param constructor called" << std::endl;
    N = n;
    elementsNumber = 0;
}

Span::Span(const Span& other)
{
    _set = other._set;
    N = other.N;
    elementsNumber = other.elementsNumber;
    std::cout << "Span : copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
    _set = other._set;
    N = other.N;
    elementsNumber = other.elementsNumber;
    std::cout << "Span : = operator called" << std::endl;
    return *this;
}

Span::~Span()
{
    std::cout << "Span : destructor called" << std::endl;
}


int Span::shortestSpan()
{
    if(_set.size() <= 1)
        throw Span::SetTooShort();
    std::multiset<int>::iterator first = _set.begin();
    std::multiset<int>::iterator second = _set.begin(); 
    std::multiset<int>::iterator end = _set.end(); 
    second++;

    int _distance = abs(*second - *first);
    for(; second != end ;)
    {
        int diff = abs(*second - *first);
        if(diff < _distance)
        _distance = diff;
        second++;
        first++;
    }
    return _distance;
}

const char *Span::MaxNumbersReached::what() const _NOEXCEPT
{
    return("Span is full");
}

const char *Span::SetTooShort::what() const _NOEXCEPT
{
    return("Span Too Short");
}

int Span::longestSpan()
{
    std::multiset<int>::iterator first = _set.begin();
    std::multiset<int>::reverse_iterator second = _set.rbegin();

    return(abs(*second - *first));
}

void Span::addNumber(int number)
{
    if(elementsNumber >= N)
        throw Span::MaxNumbersReached();
    elementsNumber++;
    _set.insert(number);
}

void Span::add_multiple(int arr[], int arrElements)
{
    if(arrElements + elementsNumber > N)
        throw Span::MaxNumbersReached();
    elementsNumber = elementsNumber + arrElements;
    _set.insert(arr,arr + arrElements);
}

void Span::print() const
{
    std::multiset<int>::iterator it = _set.begin();
    std::multiset<int>::iterator end = _set.end();

    for(;it!= end;it++)
    {
        std::cout << *it << std::endl;
    }
}