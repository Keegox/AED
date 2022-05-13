#include <cassert>
#include <iostream>
//#include <string>
//#include <iomanip>

using namespace std::literals;

int main()
{
    // prueba de tipo de dato bool

    assert(true);
    assert(false == false);
    assert(false != true);
    assert(not false);
    assert(not false == true);
    assert(false or true);
    assert((false and true) == false);
    assert(false or true and false == false);
    assert((false or true) and false == false);
    assert(true or true and false);

    // prueba de tipo de dato double

    assert(2.0 == 1.0 + 1.0);
    assert(0.0 - 1.0 == -1.0);
    assert(0.1 == 1.0 / 10.0);
    assert(1 == 1.0);
    assert(2.0 == 1 + 1.0);
    assert(2.0 == 1 + 1.0);
    assert(2 == 1 + 1.0);
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);

    assert(0.9 != 0.3 + 0.3 + 0.3);
    assert(1.0 > 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

    /*
    std::cout << std::setprecision(17) << 1.0 / 5.0 << '\n';
    std::cout << std::setprecision(17) << 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 << '\n';
    */

    // Prueba de tipo de dato unsigned

    assert(0u == 0u);
    assert(1u == 11u % 2u);
    assert(5u == 3u + 2u);
    assert(9999999999u == 9999999998u + 1u);
    assert(1000000000000000000000000001u == 1000000000000000000000000000u + 1u); // Es muy larga para el tipo de dato
    assert(3000u >= 1000u);

    // Prueba de tipo de dato string

    assert("sailer"s == "sai"s + "ler"s);
    assert("sailer"s.length() == 6);
    assert("aaa"s >= "aa"s);
    assert("1" <= "2");
    assert("AA"s < "AB"s);
    assert("hola"s == "hola"s);
    assert("hola" == "hola"); // PUEDE FALLAR..

    // Prueba de tipo de dato int

    assert(1 + 2 == 3);
    assert(3 / 1 != 0);
    assert(3 % 2 > 0);
    assert(2 < 5);
    assert(2 - 1 <= 1);
    assert(2 * 4 >= 2);

    // Prueba de tipo de dato character

    assert('A' != 'B');
    assert('A' <= 'B');
    assert('A' == 65);
    assert('B' == 'A' + 1);
    assert(131 == 'A' + 'B');
    assert(1 == 'B' % 'A');
    assert('8' != '1' + '7');
    assert(1 == 'B' - 'A');
    assert('a' != 'A');
    assert('a' - 32 == 'A');
}