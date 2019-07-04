// arrfun1.cpp -- functions with an array argument
#include <iostream>

const int ArSize = 8;

int sum_arr(const int *begin, const int *end);

int main()
{

    int sum;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";

    sum = sum_arr(cookies, cookies + ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, cookies + 3);
    std::cout << "Fisrt three eaters ate: " << sum << std::endl;
    sum = sum_arr(cookies + 4, cookies + 8);
    std::cout << "Last four eaters ate: " << sum << std::endl;

    return 0;
}

int sum_arr(const int *begin, const int *end)
{
    const int *pt;
    int result = 0;
    for (pt = begin; pt < end; pt++)
	result += *pt;

    return result;
}
