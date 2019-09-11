/*
 * Usage of search first matching element
 * 1. InputIterator find(InputIterator beg, InputIterator end, const T& value)
 * 2. InputIterator find_if(InputIterator beg, InputIterator end, UnaryPredicate op)
 * 3. InputIterator find_if_not(InputIterator beg, InputIterator end, UnaryPredicate op)
 *
 * Find a subrange starting with the first element with value 4 and ending after the second 4
 */

#include "algostuff.hpp"
using namespace std;

int main()
{
    list<int> coll;

    INSERT_ELEMENTS(coll, 1, 9);
    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll, "coll: ");

    //find the first element with value 4
    list<int>::iterator pos1;
    pos1 = find(coll.begin(), coll.end(), 4);

    //find second element with value 4
    //-note:continue the search behind the first 4(if any)
    list<int>::iterator pos2;
    if (pos1 != coll.end()) {
        pos2 = find(++pos1, coll.end(), 4);
    }

    //print all elements from first to second 4 (both included)
    //-note:now we need the position of the first 4 again(if any)
    if (pos1 != coll.end() && pos2 != coll.end()) {
        copy (--pos1, ++pos2, ostream_iterator<int>(cout, " "));
        cout << endl;
    }
}
