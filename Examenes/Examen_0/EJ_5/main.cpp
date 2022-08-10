#include <cassert>

int ParDivididoImpar(int, int);
bool EsPar(int, bool = false);

int main()
{
    assert(EsPar(ParDivididoImpar(1, 1), ) == true);
    assert(EsPar(ParDivididoImpar(2, 1), false) == false);
}

int ParDivididoImpar(int k1, int k2)
{
    return ((2 * k1) / (2 * k2 + 1));
}

bool EsPar(int A, bool Par)
{
    if ((A % 2) == 0)
    {
        Par = true;
    }
    return Par;
}
