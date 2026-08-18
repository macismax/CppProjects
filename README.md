# CppProjects

A collection of C++ learning projects and exercises. 
I will mostly only be using the Learn C++ platform with C++23 stndrd

## Projects

### Introduction00 (Based on each LearnC++ chapter)
A simple introductory C++ program and any important details or configurations.

### Basics 01(first chapter)
- statements and functions, just code that does something in the computer and a colleciton of those statments. 
- Basic objects/variables uniform initilizing with {} which are more modern and safer. 
-  naming vaiables conventional/unconventional (numApples and num_apples) - formatting

### Funtions and Files (Chapter 2)
- functions and structure returning types and non(void)
- linker/preprocesor function/ macros(not recommended)/#ifdef, #ifndef, and #endif.
- Using header/ Rules and Header Guards and Design.
- Compiling code all together with multiple cpp files (make a build .app in terminal)


### Debugging (Chapter 3)
- Debugger
- integrating functions with others

### Fundemental Data Types (Chapter 4)
- types and size of objects size_t
- scientific notaiton and trailing zeros (just move the decimal left(+)or to the right(-))
- floating point numbers and if/switch statments
- chars and static cast

### Constant/Strings (Chapter 4)
- constant variables

## Building

To compile and run:

```bash
cd Introduction00
clang++ -std=c++17 test.cpp -o test
./test
```

## Requirements

- macOS with Clang compiler
- C++17 or later

## Notes

- Build artifacts are excluded from Git (see `.gitignore`)
- Source files are in the project root directory
- C++ standard draft file included here: (https://www.open-std.org/jtc1/sc22/wg21/docs/standards)
- Reminder to update everyhting or a specific file only, you have to be in the directory.