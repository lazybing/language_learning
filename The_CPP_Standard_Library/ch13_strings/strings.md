## Purpose of the String Classes

The string classes of the C++ standard library enable you to use strings as normal types that cause
no problems for the user. Thus, you can copy, assign, and compare strings as fundamental types
without worrying about whether there is enough memory or how long the internal memory is valid.
You simply use operators, such as assignment by using =, comparison by using ==, and concatenation
by using +. In short, the string types of the C++ standard library are designed to behave as if they
were a kind of fundamental data type that does not cause any trouble.

| Operation | Effect |
| :----:    | :----: |
| constructors | Create or copy a string |
| destructor | Destroys a string |
| =, assign() | Assign a new value |
| swap() | Swaps values between two strings |
| +=, append(), push_back() | Append characters |
| insert() | Inserts characters |
| erase(), pop_back() | Deletes characters |
| clear() | Removes all characters |
| resize() | Changes the number of characters |
| replace() | Replaces characters |
| + | Concatenates strings |
| ==, !=, <, <=, >, >=, compare() | Compare strings |
| empty() | Returns whether the string is empty |
| size(), length() | Return the number of characters |
| [], at() | Access a character |
| front(), back() | Access the first or last character |
| >>, getline() | Read the value from a stream |
| << | writes the value to a stream |
| copy() | copies or writes the contents to a character array |
| data(), c_str() | Returns the value as C-string or character array |
| substr() | Returns a certain substring |
| begin(), end() | Provide normal iterator support |
| cbegin(), cend() | Provide constant iterator support |
