#include <iostream>
#include "tabtenn1.h" 

int main(int argc, char **argv)
{
    using std::cout;
    using std::endl;
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer rplayer1(1140, "Mallory", "Duck", true);

    rplayer1.Name();    //derived object uses base method
    if(rplayer1.HasTable())
        cout << ":has a table\n";
    else
        cout << ":has not a table\n";

    player1.Name(); //base object uses base method
    if(player1.HasTable())
        cout << ":has a table\n";
    else
        cout << ":has not a table\n";

    cout << "Name:";
    rplayer1.Name();
    cout << ";Rating:" << rplayer1.Rating() << endl;

    //initialize RatedPlayer using TableTennisPlayer object
    RatedPlayer rplayer2(1212, player1);
    cout << "Name:";
    rplayer2.Name();
    cout << ";Rating:" << rplayer2.Rating() << endl;

    return 0;
}


