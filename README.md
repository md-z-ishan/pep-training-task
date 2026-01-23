# Simple Calculator

A basic C++ calculator program that performs arithmetic operations.

## Features

- Addition (+)
- Subtraction (-)
- Multiplication (*)
- Division (/)
- Division by zero error handling

## How to Build

Use the provided build task in VS Code:
```
C/C++: clang build active file
```

Or compile manually:
```bash
clang -g calc.cpp -o calc
```

## How to Run

```bash
./calc
```

## Usage

1. Enter the first number
2. Enter an operator (+, -, *, /)
3. Enter the second number
4. The result will be displayed

## Example

```
Enter first number: 10
Enter operator (+, -, *, /): +
Enter second number: 5
Result = 15
```

## Error Handling

- Division by zero: Displays "Error: Division by zero!"
- Invalid operator: Displays "Invalid operator!"
