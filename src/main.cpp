#include <iostream>
#include "banking_core.h"

int main()
{
    double myBalance = 1000.0;

    std::cout << "--- He thong Ngan hang Don gian ---" << std::endl;
    displayBalance(myBalance);

    // Thu nap tien
    myBalance = deposit(myBalance, 500.5);
    std::cout << "Da nap 500.5 VND." << std::endl;
    displayBalance(myBalance);

    // Thu rut tien
    myBalance = withdraw(myBalance, 200.0);
    std::cout << "Da rut 200.0 VND." << std::endl;
    displayBalance(myBalance);

    return 0;
}