Unordered containers have some disadvantages over ordinary asociative containers:

* Unordered containers don't provide operators <, >, <=, and >= to order  
multiple instances of these containers. However == and != are provided
* lower_bound() and upper_bound() are not provided.
* Because the iterators are guaranteed only to be forward iterators,   
reverse iterators, including rbegin(), rend(), crbegin(), and crend(),  
are not supported, and you cann't use algorithms that require bidirectional   
iterators, or at least this is not portable

## Creating and Controlling Unordered Containers

**Create Copy and Destroy**

| Operation | Effect|
| :------:  | :----:|
| Unord c   | Default constructor;creates an emtpy unordered |
| Unord c(bnum) | Creates an empty unordered container that internally uses at least bnum buckets |
| Unord c(bnum, hf) | Creates an empty unordered container that internally uses at least bnum buckets and hf as hash function|
| Unord c(bnum, hf, cmp) | Creates an empty unordered container that internally uses at least bnum buckets and hf as hash function, and cmp as predicate to identify equal value|
| Unord c(c2)   | Copy constructor;creates a copy of another unordered container of the same type |
| Unord c = c2  | Copy constructor;creates a copy of another unordered container of the same type |
| Unord c(beg, end) | Creates an unordered container initialized by the elements of the range [beg, end) |
| Unord c(beg, end, bnum) | Creates an unordered container initialized by the elements of the range [beg, end) that internally uses at least bnum buckets |
| Unord c(beg, end, bnum, hf) | Creates an unordered container initialized by the elements of the range [beg, end) that internally uses at least bnum buckets and hf as hash function|
| Unord c(beg, end, bnum, hf, cmp) | Creates an unordered container initialized by the elements of the range [beg, end) that internally uses at least bnum buckets and hf as hash function, and cmp as predicate to identify equal values|
| Unord c(initlist) | Creates an unordered unordered container initialized by the elements of the initializer list initlist |
| Unord c = initlist | Creates an unordered unordered container initialized by the elements of the initializer list initlist |
| c.~Unord() | Destroys all elements and frees the memory |

Possible Types Unord of Unordered Containers

| Unord | Effect |
| :------:  | :----:|
| unordered_set<Elem> | An unordered set that by default hashes with hash<> and compares equal_to <> |
| unordered_set<Elem, Hash> | An unordered set that by defaults hashes with Hash and compares equal_to<> |
| unordered_set<Elem, Hash, Cmp> | An unordered set that by default hashes with Hash and compares with Cmp |
| unordered_multiset<Elem> | An unordered multiset that by default hashes with has<> and compares equal to <> |
| unordered_multiset<Elem, Hash> | An unordered multiset that by defaults hashes with Hash and compares equal_to<> |
| unordered_multiset<Elem, Hash, Cmp> | An unordered multiset that by default hashes with Hash and compares with Cmp |
| unordered_map<Key, T> | An unordered map that by default hashes with hash<> and compares equal_to<> |
| unordered_map<Key, T, Hash> | An unordered map that by default hashes with Hash and compares equal_to<> |
| unordered_map<Key, T, Hash, Cmp> | An unordered map that by default hashes with Hash and compares with Cmp |
| unordered_multimap<Key, T> | An unordered multimap that by default hashes with hash<> and compares equal_to<> |
| unordered_multimap<Key, T, Hash> | An unordered multimap that by default hashes with Hash and compares equal_to<> |
| unordered_multimap<Key, T, Hash, Cmp> | An unordered multimap that by default hashes with Hash and compares with Cmp |

## Operations for Unordered Containers

**Nonmodifying Operations**

| Operation | Effect|
| :------:  | :----:|
| c.empty() | Returns whether the continer is empty |
| c.size() | Returns the current number of elements |
| c.max_size() | Returns the maximum number of elements possible |
| c1 == c2 | Returns whether c1 is equal to c2 |
| c1 != c2 | Returns whether c1 is not equal to c2 |

**Special Search Operations** 

| Operation | Effect|
| :------:  | :----:|
| c.count(val) | Returns the number of elements with value val |
| c.find(val) | Returns the position of the first element with value val(or end() if none found) |
| c.equal_range(val) | Returns a range with all elements with a value equal to val |

**Assignments**

| Operation | Effect|
| :------:  | :----:|
| c = c2 | Assigns all elements of c2 to c |
| c = initlist | Assigns all elements of the initializer list initlist to c |
| c1.swap(c2)  | Swaps the data of c1 and c2 |
| swap(c1, c2) | Swaps the data of c1 and c2 |

**Iterator Functions and Element Access**

| Operation | Effect|
| :------:  | :----:|
| c.begin() | Returns a forward iterator for the first element | 
| c.end()   | Returns a forward iterator for the position after the last element |
| c.cbegin()| Returns a constant forward iterator for the first element |
| c.cend()  | Returns a constant forward iterator for the position after the last element |

**Inserting and Removing Elements**

| Operation | Effect|
| :------:  | :----:|
| c.insert(val) | Inserts a copy of val and returns the position of the new element and, for unordered containers, whether it succeeded |
| c.insert(pos, val) | Inserts a copy of val and returns the position of the new element |
| c.insert(beg, end) | Inserts a copy of all elements of the range [beg, end) |
| c.insert(initlist) | Inserts a copy of all elements in the initializer list initlist |
| c.erase(val) | Removes all elements equal to val and returns the number of removed elements |
| c.erase(pos) | Removes the element at iterator position pos and returns the following position |
| c.erase(beg, end) | Removes all elements of the range [beg, end) and returns the following position |
| c.clear() | Removes all elements |

**Using Unordered Maps as Associative Arrays**

| Operation | Effect |
| :-------: | :----: |
| c[key]    | Inserts an element with key, if it does not yet exist, and returns a reference to the value of the element with key |
| c.at(key) | Returns a reference to the value of the element with key |

