// Stucts with test.cpp : 
//

#include <iostream>

#include "Compety.hpp"

void MainMenue();

int main()
{
    Init();
    MainMenue();
    Terminate();
}


void MainMenue() {
    std::cout << 
R"(Our application will hellp with runners competition
and provide instruments for it. Such as keep track of exist competitors,
add their results, fix wrong data, and provide some statistics.)" << std::endl;
    while (true)
    {
        std::cout << "main menue:\n"<<
            "1 - add new data\n"<<
            "2 - fix old data\n"<<
            "3 - show statistics\n"<<
            "0 - exit";

        std::cout << "enter number of action:";
        char key{};        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> key;
        switch (key) {
        case '0':
            std::cout << "\nGoodbye!";
            return;
        case '1':
            NewData();
            break;
        case '2':
            FixData();
            break;
        case '3':
            ShowStatistics();
            break;
        default:
            std::cout << "\nWrong enter!";
            break;  
        }
        
    }
}