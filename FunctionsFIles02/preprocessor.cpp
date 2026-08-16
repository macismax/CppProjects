#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

    return 0;
}

// These are preprocessor directives so code that ruynes before the compiler touches it.
// #define defines a macro
// #ifdef checks if a macro is defined
// #endif ends the conditional preprocessor directive so the directive aciton ends here
// #ifndef is the opposite of ifdef (compile if not define)
// #if 0 easier way to comment/ignore code untl enddif is states(can also use #if 1 to enable code)(0not true/1 true)

// #define for saftey should be used with ALL CAPPS and UNDER_SCORES.
