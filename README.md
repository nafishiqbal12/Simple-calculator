# Switch-Case Calculator Program

## Overview
This program is a simple calculator implemented in C using `switch-case` statements. It performs basic arithmetic operations such as addition, subtraction, multiplication, and division based on the user-provided operator and operands.

## How It Works
1. The program prompts the user to enter an arithmetic operator (`+`, `-`, `*`, or `/`).
2. It then asks the user to input two numbers (operands).
3. Based on the entered operator, the program performs the corresponding arithmetic operation:
   - `+` for addition
   - `-` for subtraction
   - `*` for multiplication
   - `/` for division
4. If an invalid operator is entered, the program displays an error message and assigns a special error value (`-DBL_MAX`) to indicate the invalid operation.
5. The result is displayed with two decimal precision, provided the operation is valid.

## Input/Output Example
### Example 1 (Valid Input):
**Input:**
```
Enter an operator ( +,-,*,/): +
Enter two operands: 5 3
```
**Output:**
```
8.00
```

### Example 2 (Invalid Operator):
**Input:**
```
Enter an operator ( +,-,*,/): x
Enter two operands: 5 3
```
**Output:**
```
Error! Incorrect operator value
```

## Features
- Supports four basic arithmetic operations.
- Validates operator input and handles invalid cases gracefully.
- Displays results with two decimal precision.

## Code Breakdown
### Key Components
1. **Variable Declaration:**
   - `char op;` - To store the operator.
   - `double a, b, res;` - To store the operands and the result.

2. **Input Handling:**
   - `scanf` is used to read the operator and operands from the user.

3. **Switch-Case Logic:**
   - Handles each operator (`+`, `-`, `*`, `/`) to perform the respective operation.
   - Includes a `default` case for invalid operators.

4. **Error Handling:**
   - Outputs an error message if an invalid operator is provided.
   - Uses `-DBL_MAX` (from `float.h`) as a marker for invalid results.

5. **Output:**
   - Valid results are displayed using `printf` with `%.2lf` for formatting.

## Compilation and Execution
### Steps:
1. Save the code to a file, e.g., `calculator.c`.
2. Compile the program using a C compiler, such as `gcc`:
   ```bash
   gcc calculator.c -o calculator
   ```
3. Run the compiled program:
   ```bash
   ./calculator
   ```

## Notes
- Ensure the entered operator is valid; otherwise, the program will not perform any calculation.
- Division by zero is not explicitly handled in this code. Adding a condition to check for division by zero is recommended.

## Future Improvements
- Add input validation for numeric inputs to handle non-numeric cases.
- Handle division by zero gracefully.
- Extend the functionality to support more operators like modulus (`%`) or exponentiation (`^`).

