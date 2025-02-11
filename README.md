# Constructor-Overloading

## Aim:
To demonstrate the concept of function overloading in programming, showcasing how multiple functions with the same name can be defined with different parameters.

## Theory:
Function Overloading is a feature in many programming languages (like C++, Java, and Python) that allows the creation of multiple functions with the same name, provided they have different parameter lists. This increases the readability of the code and allows functions to perform similar tasks with different types or numbers of inputs.

Key Points:

1)Same Name: Functions share the same name.

2)Different Parameters: Functions differ in type, number, or order of parameters.

3)Compile-Time Polymorphism: Overloading is resolved at compile time.

### Syntax:
```cpp
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl; // Calls int add(int, int)
    cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << endl; // Calls double add(double, double)
    cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << endl; // Calls int add(int, int, int)
    return 0;
}
```
## Algorithm:

### Function overloading:-

1) Start

2) Initialize the Program

Begin the program by including necessary libraries (e.g., #include <iostream> in C++).

3) Define Functions

Function 1: Define a function add(int a, int b) that returns the sum of two integers.

Function 2: Define a function add(double a, double b) that returns the sum of two double values.

Function 3: Define a function add(int a, int b, int c) that returns the sum of three integers.

4) Main Function

Start the main() function.
Call Function 1:
Invoke add(2, 3) and store the result.
Print the result of the addition of two integers.

Call Function 2:
Invoke add(2.5, 3.5) and store the result.
Print the result of the addition of two doubles.

Call Function 3:
Invoke add(1, 2, 3) and store the result.
Print the result of the addition of three integers.

5) End Program

Return 0 to indicate successful execution of the program.
End the main() function.


### Operator Overloading:-
1) Identify Class & Operator: Select the class and operator to be overloaded (e.g., `+`, `==`).  

2) Decide Type: Choose whether to use a member function or a friend function based on operand types.  

3) Declare the Operator Function: Define the operator function in the class or as a friend function.  

4) Implement Logic: Write the code to perform the desired operation inside the function.  

5) Test the Operator: Create objects and apply the operator to verify its behavior.  
