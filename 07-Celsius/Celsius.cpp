#include <cassert>

//  Celsius : R -> R / Celsius(x) = 5/9 (x - 32)
double Celsius(double);
//  AreNear : R x R x R -> Boolean / AreNear(x,y,t) =   {   V   Si  |x - y| <= |t|
//                                                  {   F   e.o.c
bool AreNear(double, double, double = 0.00e1);

int main()
{
}

double Celsius(double F)
{
    return (F - 32) * 5 / 9;
}

bool AreNear(double x, double y, double t)
{
    return abs(x - y) <= abs(t);
}
