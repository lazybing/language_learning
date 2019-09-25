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

