#include <unordered_set>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    //create and initialize, expand, and print unordered multiset
    unordered_multiset<int> coll = {1, 2, 3, 5, 7, 11, 13, 17, 19, 77};
    coll.insert({-7, 17, 33, -11, 17, 19, 1, 13});
    for (auto &elem:coll)
        cout << elem << " ";
    cout << endl;

    //remove all elements with specific value
    coll.erase(17);

    //remove one of the elements with specific value
    auto pos = coll.find(13);
    if (pos != coll.end()) {
        coll.erase(pos);    
    }

    for (unordered_multiset<int>::iterator it = coll.begin(); it != coll.end(); it++)
        cout << *it << " "; 
    cout << endl;
}
