// usett0.cpp -- using a bse class
#include <iostream>
#include "tabtenn1.h"

int main()
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    rplayer1.Name();
    if (rplayer1.HasTable())
        cout << ": hasn't a table.\n";
    else
        cout << ": hasn't a table.\n";

    cout << "Name: ";
    rplayer1.Name();
    cout <<"; Rating: " << rplayer1.Rating() << endl;

    return 0;
}
