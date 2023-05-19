# Chapter 1. Getting Started

## Exercise 1.1

According to [GCC Docs](https://gcc.gnu.org/onlinedocs/gcc-9.3.0/gcc/Invoking-G_002b_002b.html),
these are the suffix conventionally used:

* source files: `.C` `.cc` `.cpp` `.CPP` `.c++` `.cp` `.cxx` `.c`
* header files: `.hh` `.hpp` `.H` `.tcc` `.h`
* preprocessed files: `.ii` `.i`

---

[`exercise1_01.cpp`](./exercise1_01.cpp)

```sh
$ g++ exercise1_01.cpp -o exercise1_01
$ ./exercise1_01
```


## Exercise 1.2

[`exercise1_02.cpp`](./exercise1_02.cpp)

```sh
# on a linux machine
$ g++ exercise1_02.cpp -o exercise1_02
$ ./exercise1_02
$ echo $?
255
```

If you want to know why the value of `$?` is `255` instead of `-1`, take a look at [this question](https://unix.stackexchange.com/questions/37915/why-do-i-get-error-255-when-returning-1) on *Unix & Linux Stack Exchange*.


## Exercise 1.3

[`exercise1_03.cpp`](./exercise1_03.cpp)


## Exercise 1.4

[`exercise1_04.cpp`](./exercise1_04.cpp)


## Exercise 1.5

[`exercise1_05.cpp`](./exercise1_05.cpp)


## Exercise 1.6

```cpp
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```

The code fragment above is *not legal* because some calls to the output operator are missing the left-hand operand.

There are 2 ways to fix that fragment:

1. We could remove `;` from the end of lines 1 and 2, thus chaining together all output requests:

    ```cpp
    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;
    ```

2. We could insert `std::cout` at the beginning of lines 2 and 3, thus creating two new chains of calls to the output operator:

    ```cpp
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    ```


## Exercise 1.7

[`exercise1_07.cpp`](./exercise1_07.cpp)

```sh
$ g++ exercise1_07.cpp -o exercise1_07
exercise1_07.cpp:2:26: error: ‘cannot’ does not name a type
    2 |  * comment pairs /*   */ cannot nest.
      |                          ^~~~~~
```


## Exercise 1.8

```cpp
std::cout << "/*";                  // legal
```
```cpp
std::cout << "*/";                  // legal
```
```cpp
std::cout << /* "*/" */;            // illegal
```
```cpp
std::cout << /*  "*/" /* "/*"  */;  // legal
```
---
[`exercise1_08a.cpp`](./exercise1_08a.cpp)
```sh
$ g++ exercise1_08a.cpp -o exercise1_08a
$ ./exercise1_08a 
/*
```
---
[`exercise1_08b.cpp`](./exercise1_08b.cpp)
```sh
$ g++ exercise1_08b.cpp -o exercise1_08b
$ ./exercise1_08b
*/
```
---
[`exercise1_08c.cpp`](./exercise1_08c.cpp)
```sh
$ g++ exercise1_08c.cpp -o exercise1_08c
exercise1_08c.cpp:5:24: warning: missing terminating " character
    5 |     std::cout << /* "*/" */;
      |                        ^
exercise1_08c.cpp:5:24: error: missing terminating " character
    5 |     std::cout << /* "*/" */;
      |                        ^~~~~
exercise1_08c.cpp: In function ‘int main()’:
exercise1_08c.cpp:6:5: error: expected primary-expression before ‘return’
    6 |     return 0;
      |     ^~~~~~
```
To fix the illegal line in this example we just need to add `"` before `;`.

---
[`exercise1_08d.cpp`](./exercise1_08d.cpp)
```sh
$ g++ exercise1_08d.cpp -o exercise1_08d
$ ./exercise1_08d
 /* 
```



## Exercise 1.9

[`exercise1_09.cpp`](./exercise1_09.cpp)


## Exercise 1.10

[`exercise1_10.cpp`](./exercise1_10.cpp)


## Exercise 1.11

[`exercise1_11.cpp`](./exercise1_11.cpp)


## Exercise 1.12

```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

This `for` loop sums the numbers in the range [-100; 100]. The final value of `sum` is zero.


## Exercise 1.13

[`exercise1_13a.cpp`](./exercise1_13a.cpp) /* revision of [`exercise1_09.cpp`](./exercise1_09.cpp) \*/<br>
[`exercise1_13b.cpp`](./exercise1_13b.cpp) /* revision of [`exercise1_10.cpp`](./exercise1_10.cpp) \*/<br>


## Exercise 1.14

The `for` statement groups in its header everything that is needed to control the number of iterations that should be executed, and therefore it is better suited for situations in which we need to repeat a block of code a predefined number of times.

The `while` is a control statement much simpler than `for` and is commonly used when the number of iterations is not known beforehand.


## Exercise 1.15

[`exercise1_15a.cpp`](./exercise1_15a.cpp) /* examples of syntax errors \*/<br>
[`exercise1_15b.cpp`](./exercise1_15b.cpp) /* examples of type errors \*/<br>
[`exercise1_15c.cpp`](./exercise1_15c.cpp) /* examples of declaration errors */


## Exercise 1.16

[`exercise1_16.cpp`](./exercise1_16.cpp)


## Exercise 1.17

If the input values are all equal, then the program will output a single line showing the number of occurrences of the input value.

If there are no duplicated values, then the program will output one line per value and each of those lines will show that its corresponding value occurs just one time.


## Exercise 1.18

[`exercise1_18.cpp`](./exercise1_18.cpp)

```sh
$ g++ exercise1_18.cpp -o exercise1_18

$ echo 2 2 2 2 2 2 | ./exercise1_18
2 occurs 6 time(s)

$ echo 1 2 3 4 5 6 | ./exercise1_18
1 occurs 1 time(s)
2 occurs 1 time(s)
3 occurs 1 time(s)
4 occurs 1 time(s)
5 occurs 1 time(s)
6 occurs 1 time(s)
```


## Exercise 1.19

[`exercise1_19.cpp`](./exercise1_19.cpp) /* revision of [`exercise1_11.cpp`](./exercise1_11.cpp) */


## Exercise 1.20

[`exercise1_20.cpp`](./exercise1_20.cpp)


## Exercise 1.21

[`exercise1_21.cpp`](./exercise1_21.cpp)


## Exercise 1.22

[`exercise1_22.cpp`](./exercise1_22.cpp)


## Exercise 1.23

[`exercise1_23.cpp`](./exercise1_23.cpp)


## Exercise 1.24

```sh
$ g++ exercise1_23.cpp -o exercise1_23
$ ./exercise1_23 < data/book_sales
1 transaction(s) for 0-201-70353-X
1 transaction(s) for 0-201-82470-1
4 transaction(s) for 0-201-88954-4
2 transaction(s) for 0-399-82477-1
2 transaction(s) for 0-201-78345-X
```


## Exercise 1.25

[`exercise1_25.cpp`](./exercise1_25.cpp)

```sh
$ g++ exercise1_25.cpp -o exercise1_25
$ ./exercise1_25 < data/book_sales
0-201-70353-X 4 99.96 24.99
0-201-82470-1 4 181.56 45.39
0-201-88954-4 16 198 12.375
0-399-82477-1 5 226.95 45.39
0-201-78345-X 5 110 22
```
