#include <iostream>
#include <string>

using namespace std;

int main(){
    string one("Li Bing");
    cout << one << endl;

    string two(20, '$');
    cout << two << endl;

    string three(one);
    cout << three << endl;

    one += " Oops!";
    cout << one << endl;

    two = "Sorry! That was ";
    three[0] = 'P';

    string four;

}
