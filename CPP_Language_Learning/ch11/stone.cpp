// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
#include "stonewt.h"
using std::cout;

void display(const Stonewt & st, int n);

int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7); // same as Stonewt wholfe = 285.7;
    Stonewt tsft(21, 8);

    cout << "The celebrity weighed ";
    incognito.show_stn();
    cout << "The detective weighed ";
    wolfe.show_stn();
    cout << "The President weighed ";
    tsft.show_lbs();
    incognito = 276.8;  // uses constructor for conversion
    tsft = 325;
    cout << "After dinner, the celebrity weighed ";
    tsft.show_lbs();
    display(tsft, 2);
    cout << "The wrestler weighed enven more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
