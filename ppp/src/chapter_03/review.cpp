/*

1. A computation is the act of producing outputs from inputs

2. Inputs are the data we start with. Outputs are the data we end with. For example, inputs are the arguments to a
    program and outputs are the results. More specific examples for inputs can be your keyboard and mouse while outputs
    are the cursor moving or letters displaying on your screen.

3. The three requirements a programmer should keep in mind when expressing comutations are: 1) correctness, 2) simplicity
    and 3) efficiency.

4. An expression computes a value froma number of operands

5. A statement is an expression followed by a semicolon.

6. An lvalue is an operator that modifies an operand and appears on the left handed side of an assignment. Operators
    that require an lvalue are: +=, -=, *=, /=. These operators and not others require an lvalue because they
    modify the operand.

7. A constant expression is a an object whose value is initialized at compile time and can not be changed.

8. A literal is an int, double, string, char.

9. A symbolic constant is a named object whose value is initialized and then cannot be changed. They are useful
    becuase they keep code readable.

10. A magic constant is a derisive name given to non-obvious literals in code that should use a symbolic constant but do
    not. Examples are: pi, speed of light, etc.

11. Some operators we can use for ints and doubles are +, *, -, /, %.

12. Ooerators that can only be used on ints are .

13. Some operators that be used for strings are +, <, >, <=, >=.

14. A programmer may prefer a switch statement to an if statement when the programmer want to make a selection based on
    a value comparison against several constants.

15. Common problems with switch statements are forgetting the break which causes fallthrough and using different types
    for the cases, you cannot switch on a string or double, you cannot use the same value for two cases.

16. The function of the three parts of for loop are: 1) the initializer, 2) the condition and 3) the increment.

17. A for loop is best used when the for statment is simple to understand. A while loop should be used only in other
    circumstances.

18. The function definition char foo(int x) means that the function foo will return a char result and accepts an int
    input referenced the local variable x within the function.

19. A separate function should be defined when functionality can be reused, when functionality should be abstracted to
    make the function easier to understnand, when functionality is logically separate and when it eases testing.

20. You can *, /, ++ and -- an int but not a string.

21. A string you can ... but not an int.

22. The index of the third element in a vector is 2 since vectors are zero-indexed.

23. A for loop that print the every element of a vector is written
    std::vector<int> v;
    for (int i = 0; i < v.size(); ++i) {
        std::cout << vector[i];
    }

24. The expression statement std::vector<char> alphabet(26); creates a vector of chars referenced as alphabet with size of
    26 and values of '\0'.

25. std::vector.push_back(x) adds a value x to the end of the vector on which it is called.

26. std::vector.size() returns the number of elements in the vector.

27. std::vector is useful because generality of data structure provides many use cases.

28. Elements of a vector are sorted by std::ranges.sort()

 */