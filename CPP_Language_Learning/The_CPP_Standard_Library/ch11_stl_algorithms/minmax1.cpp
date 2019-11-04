/*
 * Usage of minimum and maximum
 * 1. ForwardIterator min_element(ForwardIterator beg, ForwardIterator end)
 * 2. ForwardIterator min_element(ForwardIterator beg, ForwardIterator end, CompFunc op)
 * 3. ForwardIterator max_element(ForwardIterator beg, ForwardIterator end)
 * 4. ForwardIterator max_element(ForwardIterator beg, ForwardIterator end, CompFunc op)
 * 5. pair<ForwardIterator, ForwardIterator> minmax_element(ForwardIterator beg, ForwardIterator end)
 * 6. pair<ForwardIterator, ForwardIterator> minmax_element(ForwardIterator beg, ForwardIterator end, CompFunc op)
 */
#include <cstdlib>
#include "algostuff.hpp"
using namespace std;

bool absLess(int elem1, int elem2)
{
    return abs(elem1) < abs(elem2);
}

int main()
{
    deque<int> coll;
    INSERT_ELEMENTS(coll, 2, 6);
    INSERT_ELEMENTS(coll, -3, 6);
    PRINT_ELEMENTS(coll);

    // process and print minimum and maximum
    cout << "minimum: " << *min_element(coll.cbegin(), coll.cend()) << endl;
    cout << "maximum: " << *max_element(coll.cbegin(), coll.cend()) << endl;

    //print min and max and their distance using a minmax_element()
    auto mm = minmax_element(coll.cbegin(), coll.cend());
    cout << "min: " << *(mm.first) << endl; //print minimum
    cout << "max: " << *(mm.second) << endl; //print maximum
    cout << "distance: " << distance(mm.first, mm.second) << endl;

    //process and print minimum and maximum of absolute values
    cout << "minimum of absolute values: " << *min_element(coll.cbegin(), coll.cend(), absLess) << endl;
    cout << "maximum of absolute values: " << *max_element(coll.cbegin(), coll.cend(), absLess) << endl;
}
