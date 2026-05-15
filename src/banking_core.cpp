#include "banking_core.h"
#include <iostream>

double deposit(double balance, double amount)
{
    return balance + amount;
}

double withdraw(double balance, double amount)
{
    if (amount > balance)
    {
        std::cout << "Khong du tien trong tai khoan!" << std::endl;
        return balance;
    }
    return balance - amount;
}

void displayBalance(double balance)
{
    std::cout << "So du hien tai: " << balance << " VND" << std::endl;
}