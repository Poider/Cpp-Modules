#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include "Base.hpp"

int main()
{
    Base *ptr = generate();
    identify(ptr);

    // B ptr;
    // Base &ref = ptr;

    // identify(ref);
}