#include "Span.hpp"
#include <list>
int main ()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(0);
    std::cout << sp.shortestSpan() << "->" << std::endl;
}