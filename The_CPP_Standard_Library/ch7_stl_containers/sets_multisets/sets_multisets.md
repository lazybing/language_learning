Set and multiset containers sort their elements automatically according to a certain sorting criterion.
Like all standardized associative container classes, sets and multisets are usually implemented as
balanced binary trees.

Create Copy and Destroy
set may be one of the following types:

| set               | Effect |
| :----------------:| :-----:|
| set<Elem>           | A set that by default worts with less<> |
| set<Elem, Op>       | A set that by default sorts with Op |
| multiset<Elem>      | A multiset that by default sorts with less<> |
| multiset<Elem, Op>  | A multiset that by default sorts with Op |

| Operation | Effect|
| :-------: | :----:|
| set c     | Default constructor, creates an empty set/multiset without any elements |
| set c(op) | Creates an empty set/multiset that uses op as the sorting criterion     |
| set c(c2) | Copy constructor;creates a copy of another set/multiset of the samme type |
| set c(beg, end)     | Creates a set/multiset initialized by the elements of the range [beg, end) |
| set c(beg, end, op) | Creates a set/multiset with the sorting criterion op initialized by the elements of the range [beg, end) |
| set c(initlist)     | Creates a set/multiset initialized with the elements of initializer list initlist |
| set c = initlist    | Creates a set/multiset initialized with the elements of initializer list initlist |
| c.~set()            | Destroys all elements and frees the memory |

Nonmodifying Operations

| Operation | Effect |
| :-------: | :----: |
| c.empty() | Returns whether the container is empty |
| c.size()  | Returns the current number of elements |
| c.max_size() | Returns the maximum number of elements possible |
| c1 == c2     | Returns whether c1 is equal to c2 |
| c1 != c2     | Returns whether c1 is not equal to c2 |
| c1 < c2      | Returns whether c1 is less than c2 |
| c2 > c2      | Returns whether c1 is greater than c2 |
| c1 <= c2     | Returns whether c1 is less than or equal to c2 |
| c2 >= c2     | Returns whether c1 is greater than or equal to c2 |

Special Search Operations

| Operation | Effect |
| :-------: | :----: |
| c.count(val) | Returns the number of elements with value val |
| c.find(val)  | Returns the position of the first element with value val |
| c.lower_bound(val) | Returns the first position, where val would get inserted (the first element >= val)|
| c.upper_bound(val) | Returns the last position, where val would get inserted  (the first element > val) |
| c.equal_range(val) | Returns a range with all elements with a value equal to val |

Assignments

| Operation | Effect |
| :-------: | :----: |
| c = c2 | Assigns all elements of c2 to c |
| c = rv | Move assigns all elements of the value rv to c |
| c = initlist | Assigns all elements of the initializer list initlist to c|
| c1.swap(c2)  | Swaps the data of c1 and c2 |
| swap(c1, c2) | Swaps the data of c1 and c2 |

Iterator Functions

| Operation | Effect |
| :-------: | :----: |
| c.begin() | Returns a bidirectional iterator for the first element |
| c.end()   | Returns a bidirectional iterator for the position after the last element |
| c.cbegin()| Returns a constant bidirectional iterator for the first element |
| c.cend()  | Returns a constant bidirectional iterator for the position after the last element |

Inserting and Removing Elements

| Operation | Effect |
| :-------: | :----: |
| c.insert(val) | Inserts a copy val and returns the position of the new element |
| c.insert(pos, val) | Inserts a copy val and returns the position of the new element |
| c.insert(beg, end) | Inserts a copy of all elements of the range [beg, end) |
| c.insert(initlist) | Inserts a copy of all elements in the initializer list initlist |
| c.erase(val)       | Removes all elements equal to val and returns the number of removed elements |
| c.erase(pos)       | Removes the element at iterator position pos and returns the following |

