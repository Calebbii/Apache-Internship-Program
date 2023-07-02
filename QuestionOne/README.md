## Question
Node is defined as follows :
typedef struct Node
{
TypeTag type;
} Node;
typedef enum TypeTag {
...
}
Using this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations (+, -, *, /) and conditions.
The fibonacci function should be implemented using Dynamic Programming.
main()
{
Node *add = (*makeFunc(ADD))(10, 6);
Node *mul = (*makeFunc(MUL))(5, 4);
Node *sub = (*makeFunc(SUB))(mul, add);
Node *fibo = (*makeFunc(SUB))(sub, NULL);
calc(add);
calc(mul);
calc(sub);
calc(fibo)
}
Output
add : 16
mul : 20
sub : -4
fibo : 2


## BDD
BDD:

Given Node structure and arithmetic operations:

ADD: Addition
SUB: Subtraction
MUL: Multiplication
DIV: Division
* Create the Node structure with the necessary fields to represent the arithmetic operations and values.
* Implement the makeFunc function to create new nodes of the Node structure.
* Implement the calc function to evaluate the arithmetic expressions stored in the Node structure recursively.
* Implement the fibonacci function using dynamic programming to calculate the Fibonacci sequence based on the evaluated arithmetic expressions.
* In the main function:
  * *  Create the desired arithmetic expression tree using makeFunc.
  * * Evaluate the expressions using calc.
  * * Calculate the Fibonacci number based on the evaluated expression using fibonacci.
  * * Print the results.

## Psedocode
Feature: Fibonacci Calculation

  Scenario: Calculate Fibonacci Sequence using Dynamic Programming

    Given a Node structure is defined with a TypeTag enum
    And the makeFunc function is defined to create nodes with the specified type
    And the calc function is defined to evaluate arithmetic expressions stored in nodes
    And the fibonacci function is defined to calculate the Fibonacci sequence using dynamic programming

    When the following expressions are created:
      | Node   | Arguments         |
      | add    | (10, 6)           |
      | mul    | (5, 4)            |
      | sub    | (mul, add)        |
      | fibo   | (sub, NULL)       |

    And the calc function is called for each node

    Then the following results are expected:
      | Node   | Expected Result   |
      | add    | 16                |
      | mul    | 20                |
      | sub    | -4                |
      | fibo   | 2                 |



## Setup Instructions

This section will guide you through setting up and running this repository on your local machine.

### Program

* Clone the repository
    ```
    git clone https://github.com/Calebbii/Apache-Internship-Program
    ```
* Navigate to the project folder
    ```
    cd Apache Internship Program
    ```
* To interact with the solution for the first Question, navigate to the `QuestionOne` folder
    ```
    cd QuestionOne
    ```
* Compile the C code using a C compiler such as GCC by running the following command:
    ```
    gcc -o fibonacci fibonacci.c
    ```
* Run the compiled program by executing the generated executable:

   On Windows:
   ```
   fibonacci.exe
   ```
   On Linux or macOS:
   ```
   ./fibonacci
   ```
* The program will execute, and you should see the output printed in the console:
    ```
    add: 16
    mul: 20
    sub: -4
    fibo: 2
    ```
    
    ## Author
* [Caleb Kiprotich](https://github.com/Calebbii)