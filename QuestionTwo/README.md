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
* To interact with the solution for the first Question, navigate to the `Question 2` folder
    ```
    cd Question 2
    ```
* To compile the C code using a C compiler such as GCC by running the following command:(Depending on the approach [dynamicApproach,iterativeApproach,recursiveApproach])
    ```
    gcc -o dynamicApproach dynamicApproach.c
    ```
* To run the compiled program by executing the generated executable:

   On Windows:
   ```
   dynamicApproach.exe
   ```
   On Linux or macOS:
   ```
   ./dynamicApproach
   ```

## Advantages and Disadvantages of the Three Approaches:

### Recursive Approach:

#### Advantages:
* Simple and intuitive implementation.
* Easy to understand the logic.
#### Disadvantages:
* Can be inefficient for large values of n due to repetitive function calls.
* May lead to stack overflow for very large values of n.
* Iterative Approach:

#### Advantages:
* More efficient than the recursive approach.
* Avoids excessive function calls.
#### Disadvantages:
* Requires maintaining additional variables for tracking the values.
* Harder to understand for someone unfamiliar with the iteration concept.
* Dynamic Programming Approach:

#### Advantages:
* Most efficient approach for computing Fibonacci numbers.
* Avoids redundant calculations by storing intermediate results in an array.
* Scales well for larger values of n.
#### Disadvantages:
* Requires additional memory to store the dynamic programming table/array.

