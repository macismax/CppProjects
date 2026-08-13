/*
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


#include <chrono>
#include <iostream>
#include <thread>

int main()
{
    std::cout << "Loading..." << std::flush;

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << "Done!\n";
}