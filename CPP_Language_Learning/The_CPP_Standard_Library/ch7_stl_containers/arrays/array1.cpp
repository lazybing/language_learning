#include <array>
#include <algorithm>
#include <functional>
#include <numeric>
#include "print.hpp"

using namespace std;

int main()
{
    //create array with 10 ints
    array<int, 10> a = {11, 22, 33, 44};
    array<int, 10> b(a);
    array<int, 10> c = a;

    PRINT_ELEMENTS(a);
    PRINT_ELEMENTS(b);
    PRINT_ELEMENTS(c);

    //modify last two elements
    a.back() = 9999999;
    a.front() = 3;
    a[a.size() - 2] = 42;
    PRINT_ELEMENTS(a);

    //process sum of all elements
    cout << "sum: " << accumulate(a.begin(), a.end(), 0) << endl;

    //negate all elements
    transform(a.begin(), a.end(),   //source
              a.begin(),            //destination
              negate<int>());       //operation
    PRINT_ELEMENTS(a);
}
