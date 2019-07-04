// arrfun1.cpp -- functions with an array argument
#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main()
{

    int sum;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    std::cout << cookies << " = array address, ";
    std::cout << sizeof cookies << " = sizeof cookies\n";

    sum = sum_arr(cookies, ArSize);
    std::cout << "Total cookies eaten: " << sum << std::endl;
    sum = sum_arr(cookies, 3);
    std::cout << "Fisrt three eaters ate: " << sum << std::endl;
    sum = sum_arr(cookies + 4, 4);
    std::cout << "Last four eaters ate: " << sum << std::endl;

    return 0;
}

int sum_arr(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
	result += arr[i];

    return result;
}
