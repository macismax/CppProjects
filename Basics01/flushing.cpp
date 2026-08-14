/*                               // This program demonstrates the behavior of output buffering in C++. It prints "Loading..." to the console, waits for 5 seconds, and then prints "Done!".
#include <chrono>
#include <iostream>
#include <thread>

int main()
{
    std::cout << "Loading...";

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "Done!\n";
}
*/


                                // This program demonstrates the use of std::flush to flush the output buffer immediately after printing "Loading...".
#include <chrono>
#include <iostream>
#include <thread>

int main()
{
    std::cout << "Loading..." << std::flush;

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "Done!\n";
}