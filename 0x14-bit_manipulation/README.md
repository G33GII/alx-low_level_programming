# 0x14. C - Bit Manipulation

In this lesson, we will explore the concept of bit manipulation in the C programming language. Bit manipulation involves performing operations at the binary level on individual bits within data types, primarily integers. Understanding bit manipulation is essential for tasks such as setting, clearing, toggling, and testing specific bits in binary representations.

## Learning Objectives

By the end of this lesson, you should be able to:

1. Understand the bitwise operators in C.
2. Perform common bit manipulation operations, including setting, clearing, and toggling bits.
3. Use bit masks to manipulate specific bits within an integer.
4. Solve practical problems using bit manipulation techniques.

## Bitwise Operators

C provides several bitwise operators for manipulating individual bits in integers:

- `&` (Bitwise AND): Performs a bitwise AND operation.
- `|` (Bitwise OR): Performs a bitwise OR operation.
- `^` (Bitwise XOR): Performs a bitwise XOR (exclusive OR) operation.
- `~` (Bitwise NOT): Inverts all the bits in a value.

## Common Bit Manipulation Techniques

### Setting a Bit

To set (turn on) a specific bit in an integer, you can use the bitwise OR operator (`|`) with a mask containing only that bit set to 1.

```c
int setBit(int num, int position) {
    return num | (1 << position);
}
