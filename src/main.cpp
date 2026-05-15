#include <iostream>
#include "banking_core.h"

int main()
{
    //Khởi tạo số tiền ban đầu
    double myBalance = 1000000000;

    std::cout << "--- He Thong Ngan Hang Don Gian ---" << std::endl;
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