Maps and multimaps are containers that manage key/value pairs as elements.
These containers sort their elements automatically, according to a certain
sorting criterion that is used for the key. The difference between the two
is that multimaps allow duplicates, whereas maps do not.

Maps and multimaps sort their elements automatically, according to the element's
keys, and so have good performance when searching for elements that have a certain
key. Searching for elements that have a certain value promotes bad performance.

To modify the key of an element, you must remove the element that has the old key
and insert a new element that has the new key and the old value.

**Create Copy and Destroy**

| Operation | Effect |
| :-------: | :----: |
| map c     | Default constructor; creates an empty map/multimap without any elements |
| map c(op) | Creates an empty map/multimap that uses op as the sorting criterion     |
| map c(c2) | Copy constructor; creates a copy of another map/multimap of the same type |
| map c = c2| Copy constructor; creates a copy of another map/multimap of the same type |
| map c(beg, end) | Creates a map/multimap initialized by the elements of the range [beg, end) |
| map c(beg, end, op) | Creates a map/multimap with the sorting criterion op initialized by the elements of the range [beg, end) |
| map c(initlist)     | Creates a map/multimap initialized with the elements of initializer list initlist | 
| map c = initlist    | Creates a map/multimap initialized with the elements of initializer list initlist | 
| c.~map()            | Destroys all elements and frees the memory |

**map** may be one of the following types:

| map | Effect |
| :-------: | :----: |
| map<Key, Val>             | A map that by default sorts keys with less<> |
| map<key, Val, Op>         | A map that by default sorts keys with Op |
| multimap<Key, Val>        | A multimap that by default sorts keys with less |
| multimap<Key, Val, Op>    | A multimap that by default sorts keys with Op |

**Nonmodifying and Special Search Operations**

Comparisons are provided only for containers of the same type. Thus, the key, the value, and
the sorting criterion must be of the same type.

| Operation | Effect |
| :-------: | :----: |
| c.empty() | Returns whether the container is empty |
| c.size()  | Returns the current number of elements |
| c.max_size() | Returns the maximum number of elements possible |
| c1 == c2 | Returns whether c1 is equal to c2 |
| c1 != c2 | Returns whether c1 is not equal to c2 |
| c1 < c2  | Returns whether c1 is less than c2 |
| c1 > c2  | Returns whether c1 is greater than c2 |
| c1 <= c2 | Returns whether c1 is less than or equal to c2 |
| c1 >= c2 | Returns whether c1 is greater than or equal to c2 |

**Special Search Operations**

| Operation | Effect |
| :-------: | :----: |
| c.count(val) | Returns the number of elements with key val |
| c.find(val)  | Returns the position of the first element with key val |
| c.lower_bound(val) | Returns the first position where an element with key val would get inserted (the first element with a key >= val)|
| c.upper_bound(val) | Returns the last  position where an element with key val would get inserted (the first element with a key > val) |
| c.equal_range(val) | Returns a range with all elements with a key equal to val |

** Assignments **

| Operation | Effect |
| :-------: | :----: |
| c = c2 | Assigns all elements of c2 to c |
| c = initlist | Assigns all elements of the initializer list initlist to c |
| c1.swap(c2)  | Swaps the data of c1 and c2 |
| swap(c1, c2) | Swaps the data of c1 and c2 |

**Iterator Functions and Element Access**

| Operation | Effect |
| :-------: | :----: |
| c.begin() | Returns a bidirectional iterator for the first element |
| c.end()   | Returns a bidirectional iterator for the position after the last element |
| c.rbegin()| Returns a constant bidirectional iterator for the first element |
| c.rend()  | Returns a constant bidirectional iterator for the position after the last element |

**Inserting and Removing Elements**

| Operation | Effect |
| :-------: | :----: |
| c.insert(val) | Inserts a copy of val and returns the position of the new element and for maps, whether it succeeded |
| c.insert(pos, val) | Inserts a copy of val and returns the position of the new element |
| c.insert(beg, end) | Inserts a copy of all elements of the range [beg, end) |
| c.insert(initlist) | Inserts a copy of all elements in the initializer list initlist |
| c.erase(val)       | Removes all elements equal to val and returns the number of removed elements |
| c.erase(beg, end)  | Removes all elements of the range [beg, end) and returns the following position |
| c.clear()          | Removes all elements |

Alternatively, there are three other ways to pass a value into a map or a multimap:
1. Use value_type.

```
std::map<std::string, float> coll;
coll.insert(std::map<std::string, float>::value_type("otto", 22,3));
coll.insert(decltype(coll)::value_type("otto2", 22.4));
```

2. Use pari<>.

```
std::map<std::string, float> coll;
//use implicit conversion:
coll.insert(std::pair<std::string, float>("otto", 22.3));
//use no implicit conversion:
coll.insert(std::pair<const std::string, float>("otto", 22.3));
```

3. Use make_pair()

```
std::map<std::string, float> coll;
coll.insert(std::make_pair("otto", 22.3));
```

**Using Maps as Associative Arrays**

| Operation | Effect |
| :-------: | :----: |
| c[key]    | Inserts an element with key, if it does not yet exist, and returns a reference to the value of the element with key |
| c.at(key) | Returns a reference to the value of the element with key |

