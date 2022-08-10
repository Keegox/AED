#include <cassert>

// |R -> |R : Distancia(A,B) = |B-A|    :.     {    B - A   Si  B - A >= 0
//                                             { - (B - A)  Si  B - A <  0
double Distancia(double, double);

double Abs(double);

// AreNear : R^3 -> B / AreNear(a,b,t)= | a - b | <= | t |
bool AreNear(double, double, double = 1.0);

int main()
{
    assert(AreNear(Distancia(2, 3), 1));
    assert(AreNear(Distancia(3, 1), 2));
}

double Distancia(double B, double A)
{
    return Abs(B - A);
}

double Abs(double M)
{
    return M < 0 ? -M : M;
}

bool AreNear(double x, double y, double t)
{
    return (y - t) <= x and x <= (y + t);
}