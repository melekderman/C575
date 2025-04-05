# C++ Concepts with Examples

## diversion to a file >

```bash
g++ input.cpp -o program
./program > output.txt
```

## Functions

[Source](https://www.programiz.com/cpp-programming/function)

==Example 1:==

```cpp
#include <iostream>
using namespace std;

// declaring a function
void greet() {
    cout << "Hello world!";
}

int main() {

    // calling the function
    greet();

    return 0;
}

// Output
// Hello world!
```

==Example 2:==

```cpp
// program to print a text

#include <iostream>
using namespace std;

// display a number
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main() {
     
     int num1 = 5;
     double num2 = 5.5;

    // calling the function
    displayNum(num1, num2);

    return 0;
}

// Output:
// The int number is 5
// The double number is 5.5
```

## Arrays

[Source](https://www.programiz.com/cpp-programming/arrays)

==Example 1:==

```cpp
int arr[5] = {1, 2, 3, 4, 5};
cout << arr[2]; // Output: 3
```

==Example 2:==

```cpp
#include <iostream>
using namespace std;

int main() {

  int numbers[5] = {7, 5, 6, 12, 35};

  cout << "The numbers are: ";

  //  Printing array elements
  // using range based for loop
  for (int n : numbers) {
    cout << n << "  ";
  }

  cout << "\nThe numbers are: ";

  //  Printing array elements
  // using traditional for loop
  for (int i = 0; i < 5; ++i) {
    cout << numbers[i] << "  ";
  }

  return 0;
}

// Output
// The numbers are: 7  5  6  12  35
// The numbers are: 7  5  6  12  35
```

==Example 3:==

```cpp
#include <iostream>
using namespace std;

int main() {

  int numbers[5];

  cout << "Enter 5 numbers: " << endl;

  //  store input from user to array
  for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
  }

  cout << "The numbers are: ";

  //  print array elements
  for (int n = 0; n < 5; ++n) {
    cout << numbers[n] << "  ";
  }

  return 0;
}

// Output:
// Enter 5 numbers: 
// 11
// 12
// 13
// 14
// 15
// The numbers are: 11  12  13  14  15
```

==Example 4:==

```cpp
#include <iostream>
using namespace std;

int main() {
    
  // initialize an array without specifying size
  double numbers[] = {7, 5, 6, 12, 35, 27};

  double sum = 0;
  double count = 0;
  double average;

  cout << "The numbers are: ";

  //  print array elements
  // use of range-based for loop
  for (const double &n : numbers) {
    cout << n << "  ";

    //  calculate the sum
    sum += n;

    // count the no. of array elements
    ++count;
  }

  // print the sum
  cout << "\nTheir Sum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "Their Average = " << average << endl;

  return 0;
}

// Output:
// The numbers are: 7  5  6  12  35  27
// Their Sum = 92
// Their Average = 15.3333
```

## For Loops

[Source](https://www.programiz.com/cpp-programming/for-loop)

==Example 1:==

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
// Output: 0 1 2 3 4
```

==Example 2:==

```cpp
// C++ Program to display a text 5 times

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        cout <<  "Hello World! " << endl;
    }
    return 0;
}
```

## Structures

[Source](https://www.programiz.com/cpp-programming/structure)

A collection of variables


==Example:==

```cpp
// Program to assign data to members of a structure variable

#include <iostream>
using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};

int main()
{
    Person p1;
    
    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << "Enter last name: ";
    cin >> p1.last_name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "First Name: " << p1.first_name << endl;
    cout << "Last Name: " << p1.last_name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}
```

## Array of Structures

An array where each element is a structure instance.

==Example:==

```cpp
#include <iostream>
#include <string>

struct Employee {
    std::string name;
    int id;
};

int main() {
    Employee employees[] = {{"Melek", 1}, {"Bob", 2}, {"", 3}};
    int size = sizeof(employees) / sizeof(employees[0]);
    
    for (int i = 0; i < size; ++i) {
        std::cout << "Employee " << employees[i].id << ": " << employees[i].name << std::endl;
    }
    
    return 0;
}
```

## Structure of Arrays

A structure that holds separate arrays for each field.

==Example:==

```cpp
#include <iostream>
#include <string>

struct Data {
    int ids[3];
    std::string names[3];
};

int main() {
    Data data = {{1, 2, 3}, {"Alice", "Bob", "Charlie"}};
    
    for (int i = 0; i < 3; ++i) {
        std::cout << "ID: " << data.ids[i] << ", Name: " << data.names[i] << std::endl;
    }
    
    return 0;
}
```

# Pointers

A simple demonstration of pointers and dereferencing.

==Example:==

```cpp
#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;
    
    std::cout << "Value: " << value << std::endl;
    std::cout << "Address: " << ptr << std::endl;
    std::cout << "Dereferenced: " << *ptr << std::endl;
    
    return 0;
}
```

## Linked Lists

Creating and printing a simple singly linked list.

==Example:==

```cpp
#include <iostream>

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create two static nodes
    Node a {1, nullptr};
    Node b {2, nullptr};

    // Link node 'a' to node 'b'
    a.next = &b;
    
    // 'head' points to the start of the list
    Node* head = &a;
    
    // Print the list using a simple loop
    for (Node* current = head; current != nullptr; current = current->next) {
        std::cout << current->data << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
```

# Copyright

[Terms of Conditions (Programiz.com) - See 3.4](https://www.programiz.com/terms-of-use)
