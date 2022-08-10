#include <cassert>
int doble(int);
int main()
{
    assert(doble(3) == 6);
    assert(doble(-3) == -6);
    assert(doble(0) == 0);
    assert(doble(10) == 20);
    assert(doble(2.5) == 4.0); // Solo toma la parte entera.
    assert(doble(doble(7)) == 28);
}
int doble(int a)
{
    return 2 * a;
}