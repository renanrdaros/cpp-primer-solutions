# Chapter 3. Strings, Vectors, and Arrays

## Exercise 3.1

[`exercise3_01a.cpp`](./exercise3_01a.cpp) /* revision of [`exercise1_09.cpp`](../ch01/exercise1_09.cpp) \*/<br>
[`exercise3_01b.cpp`](./exercise3_01b.cpp) /* revision of [`exercise1_10.cpp`](../ch01/exercise1_10.cpp) \*/<br>
[`exercise3_01c.cpp`](./exercise3_01c.cpp) /* revision of [`exercise1_11.cpp`](../ch01/exercise1_11.cpp) \*/<br>
[`exercise3_01d.cpp`](./exercise3_01d.cpp) /* revision of [`exercise2_41a.cpp`](../ch02/exercise2_41a.cpp) \*/<br>
[`exercise3_01e.cpp`](./exercise3_01e.cpp) /* revision of [`exercise2_41b.cpp`](../ch02/exercise2_41b.cpp) \*/<br>
[`exercise3_01f.cpp`](./exercise3_01f.cpp) /* revision of [`exercise2_41c.cpp`](../ch02/exercise2_41c.cpp) \*/<br>
[`exercise3_01g.cpp`](./exercise3_01g.cpp) /* revision of [`exercise2_41d.cpp`](../ch02/exercise2_41d.cpp) \*/<br>

---
`exercise3_01h` /* revision of `exercise2_41e` */

```sh
$ g++ exercise3_01g.cpp -o exercise3_01g
$ ./exercise3_01g < data/book_sales 
1 transaction(s) for 0-201-70353-X
1 transaction(s) for 0-201-82470-1
4 transaction(s) for 0-201-88954-4
2 transaction(s) for 0-399-82477-1
2 transaction(s) for 0-201-78345-X
```

---
[`exercise3_01i.cpp`](./exercise3_01i.cpp) /* revision of [`exercise2_41f.cpp`](../ch02/exercise2_41f.cpp) */

```sh
$ g++ exercise3_01i.cpp -o exercise3_01i
$ ./exercise3_01i < data/book_sales 
0-201-70353-X 4 99.96 24.99
0-201-82470-1 4 181.56 45.39
0-201-88954-4 16 198 12.375
0-399-82477-1 5 226.95 45.39
0-201-78345-X 5 110 22

```


## Exercise 3.2

[`exercise3_02a.cpp`](./exercise3_02a.cpp)<br>
[`exercise3_02b.cpp`](./exercise3_02b.cpp)


## Exercise 3.3

The `string` input operator ignores (reads and discards) any leading whitespace (e.g., `' '`, `'\n'`, `'\t'`). It then reads characters into a `string` until the next whitespace character is encountered.

The function `getline` reads characters into a `string` until it finds the first newline character (`'\n'`). The newline char that terminates the reading is read but discarded (it is *not* stored in the `string`).


## Exercise 3.4

[`exercise3_04a.cpp`](./exercise3_04a.cpp)<br>
[`exercise3_04b.cpp`](./exercise3_04b.cpp)


## Exercise 3.5

[`exercise3_05a.cpp`](./exercise3_05a.cpp)<br>
[`exercise3_05b.cpp`](./exercise3_05b.cpp)


## Exercise 3.6

[`exercise3_06.cpp`](./exercise3_06.cpp)


## Exercise 3.7

If the loop control variable were of type `char`, then instead of referencing the characters from the string, it would just hold *copies* of those characters, and thus the string would not be modified.

[`exercise3_07.cpp`](./exercise3_07.cpp) /* :beetle: bug alert - this code contains a logic error */

```sh
$ ./exercise3_07
before range for: foobar
after range for:  foobar
```


## Exercise 3.8

[`exercise3_08a.cpp`](./exercise3_08a.cpp) /* revision of [`exercise3_06.cpp`](./exercise3_06.cpp) using a `while` loop \*/<br> 
[`exercise3_08b.cpp`](./exercise3_08b.cpp) /* revision of [`exercise3_06.cpp`](./exercise3_06.cpp) using a traditional `for` loop */

If we need to access every element in a sequence, like in this example, the best approach is to use the **range `for`**. This approach makes clear the intent of the code and prevents from accidental accesses to memory addresses that are out-of-range of the sequence.


## Exercise 3.9

```cpp
string s;
cout << s[0] << endl;
```

`s` is initialized to the empty string. So, in the expression `s[0]`, the program is trying to access a memory position that is out-of-range of `s`. The code fragment would compile but its behavior is *undefined*.


## Exercise 3.10

[`exercise3_10.cpp`](./exercise3_10.cpp)


## Exercise 3.11

```cpp
const string s = "Keep out!";
for (auto& c : s) { /* ...  */ }
```

The type of `c` is `const char&`, so the fragment above is valid only if the code inside the body of the `for` loop doesn't try to change `c`.


## Exercise 3.12

```cpp
// defines an empty vector of vectors of int
vector<vector<int>> ivec;

// error: svec holds strings, not vectors of ints
vector<string> svec = ivec;

// defines a vector of strings initialized with 10 strings with value "null"
vector<string> svec(10, "null");
```


## Exercise 3.13

```cpp
vector<int> v1;              // empty vector
vector<int> v2(10);          // 10 int elements, each initialized to 0
vector<int> v3(10, 42);      // 10 int elements, each initialized to 42
vector<int> v4{10};          //  1 int element initialized to 10
vector<int> v5{10, 42};      //  2 int elements: 10 and 42
vector<string> v6{10};       // 10 empty strings
vector<string> v7{10, "hi"}; // 10 strings, each initialized to "hi"
```


## Exercise 3.14

[`exercise3_14.cpp`](./exercise3_14.cpp)


## Exercise 3.15

[`exercise3_15.cpp`](./exercise3_15.cpp)


## Exercise 3.16

[`exercise3_16.cpp`](./exercise3_16.cpp)


## Exercise 3.17

[`exercise3_17.cpp`](./exercise3_17.cpp)


## Exercise 3.18

```cpp
// error: ivec is empty; there are no elements to subscript
vector<int> ivec;
ivec[0] = 42;
```

```cpp
// fix: append 42 to ivec using the push_back() member function
vector<int> ivec;
ivec.push_back(42);
```


## Exercise 3.19

```cpp
vector<int> ivec1(10, 42);
vector<int> ivec2 {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

vector<int> ivec3;
for (decltype(ivec3.size()) i = 0; i != 10; ++i)
    ivec3.push_back(42);
```

The preferred way to initialize a `vector` with `n` elements, each with the same value, is the one used to initialize `ivec1`. It is the easier form to write and read.


## Exercise 3.20

[`exercise3_20a.cpp`](./exercise3_20a.cpp)<br>
[`exercise3_20b.cpp`](./exercise3_20b.cpp)


## Exercise 3.21

[`exercise3_21.cpp`](./exercise3_21.cpp) /* revision of [`exercise3_16.cpp`](./exercise3_16.cpp) using iterators */


## Exercise 3.22

[`exercise3_22.cpp`](./exercise3_22.cpp)


## Exercise 3.23

[`exercise3_23.cpp`](./exercise3_23.cpp)


## Exercise 3.24

[`exercise3_24a.cpp`](./exercise3_24a.cpp) /* revision of [`exercise3_20a.cpp`](./exercise3_20a.cpp) using iterators \*/<br>
[`exercise3_24b.cpp`](./exercise3_24b.cpp) /* revision of [`exercise3_20b.cpp`](./exercise3_20b.cpp) using iterators */


## Exercise 3.25

[`exercise3_25.cpp`](./exercise3_25.cpp) /* revision of the grade clustering program from section 3.3.3 */


## Exercise 3.26

The difference between iterators is defined, the sum is not:

```cpp
mid = beg + (end - beg) / 2; // ok
mid = (beg + end) / 2;       // error
```

We can use the `+` operator to add an integral value to an iterator, but the same operation is not defined if both operands are iterators.


## Exercise 3.27

```cpp
unsigned buf_size = 1024;
int ia[buf_size];            // illegal - buf_size is not constexpr
int ia[4 * 7 - 14];          // legal
int ia[txt_size()];          // legal ONLY IF txt_size() is constexpr
char st[11] = "fundamental"; // illegal - there's no space for the null character
```


## Exercise 3.28

```cpp
string sa[10];  // 10 empty strings
int ia[10];     // 10 ints initialized to 0

int main() {
    string sa2[10]; // 10 empty strings
    int    ia2[10]; // 10 uninitialized ints (values are undefined)
}
```


## Exercise 3.29

Arrays are far less flexible than `vector`s:
- arrays have fixed size; we cannot add elements to them.
- the array's dimension must be known at compile time.
- we cannot initialize an array as a copy of another array.
- we cannot assign one array to another.


## Exercise 3.30

```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
    ia[ix] = ix;
```

The loop control variable in the code above is going from 1 through 10, but the correct indices for the array `ia` go from 0 through 9, not 1 through 10. The program is accessing memory that is outside the range of `ia` and the result of that is **undefined behavior**.


## Exercise 3.31

[`exercise3_31.cpp`](exercise3_31.cpp)


## Exercise 3.32

[`exercise3_32a.cpp`](exercise3_32a.cpp)<br>
[`exercise3_32b.cpp`](exercise3_32b.cpp)


## Exercise 3.33

The array would be default-initialized, and its elements (which are of a built-in type) would have undefined values.


## Exercise 3.34

```cpp
p1 += p2 - p1;
```

The code above makes `p1` point to an element `(p2 - p1)` elements ahead (or behind) its original position. It also makes `p1` points to the same element as `p2`, so it is equivalent to `p1 = p2`.

The code above is always legal, no matter the values of `p1` and `p2` (assuming that `p1` and `p2` point to elements in the same array).


## Exercise 3.35

[`exercise3_35.cpp`](exercise3_35.cpp)


## Exercise 3.36

[`exercise3_36a.cpp`](exercise3_36a.cpp)<br>
[`exercise3_36b.cpp`](exercise3_36b.cpp)


## Exercise 3.37

```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}
```

The program above prints all the characters in `ca` and (**probably\***) continues printing whatever characters follow `'h' 'e' 'l' 'l' 'o'` in memory until it eventually encounters a null character.

\* I said "probably" because the actual behavior of the program is **undefined**.


## Exercise 3.38

Pointers hold memory addresses. What would be the point (pun intended) of adding memory addresses together? What the heck would a programmer do with a sum of memory addresses? I can't think of an use for it.


## Exercise 3.39

[`exercise3_39a.cpp`](exercise3_39a.cpp)<br>
[`exercise3_39b.cpp`](exercise3_39b.cpp)


## Exercise 3.40

[`exercise3_40.cpp`](exercise3_40.cpp)


## Exercise 3.41

[`exercise3_41.cpp`](exercise3_41.cpp)


## Exercise 3.42

[`exercise3_42.cpp`](exercise3_42.cpp)


## Exercise 3.43

[`exercise3_43a.cpp`](exercise3_43a.cpp)<br>
[`exercise3_43b.cpp`](exercise3_43b.cpp)<br>
[`exercise3_43c.cpp`](exercise3_43c.cpp)


## Exercise 3.44

[`exercise3_44a.cpp`](exercise3_44a.cpp)<br>
[`exercise3_44b.cpp`](exercise3_44b.cpp)<br>
[`exercise3_44c.cpp`](exercise3_44c.cpp)


## Exercise 3.45

[`exercise3_45a.cpp`](exercise3_45a.cpp)<br>
[`exercise3_45b.cpp`](exercise3_45b.cpp)<br>
[`exercise3_45c.cpp`](exercise3_45c.cpp)
