// Stucts with test.cpp : 
//

#include <iostream>

#include "Compety.hpp"

void MainMenue();
void NewData();
void FixData();
void ShowStatistics();


template<typename Type>
Type Scan() {
    Type result{};
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> result;
    return result;
}

Contestant * CollectData(bool fool);


int main(){
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
        std::cout << "main menue:\n" <<
            "1 - add new data\n" <<
            "2 - fix old data\n" <<
            "3 - show statistics\n" <<
            "0 - exit";
        std::cout << "enter number of action:";
        switch (Scan<char>()) {
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

void NewData() {
    std::cout << "You have two possible way to add new contestant.\n";
    while (true){
        std::cout << "menue:\n" <<
            "1 - add contestant with results\n" <<
            "2 - add contestant without results\n" <<
            "0 - exit";
        std::cout << "enter number of action:";
        bool fullData{ false };
        switch (Scan<char>()) {
        case '0':
            std::cout << "\nGoodbye!";
            return;
        case '1':
            fullData = true;
        case '2':
            Add(CollectData(fullData));
            break;
        default:
            std::cout << "\nWrong enter!";
            break;
        }
    }
}

Contestant* CollectData(bool full) {
    int id{};    
    std::cout << "Enter id of contestant: ";
    id = Scan<int>();
    std::string name{};
    std::cout << "Enter name of contestant: ";
    name = Scan<std::string>();
    auto result = Create(id, name);
    for (size_t i = 1; full; i++){
        std::cout << "Enter result of stage numer " << i << ": ";
        AddStage(result, Scan<double>());
        std::cout << "Enter 0 if it last result: ";
        if (Scan<char>() == '0') {
            full = false;
        }
    }
}

void FixData() {
    // not complete by now
    std::cout << "You have two possible way to add new contestant.\n";
    while (true) {
        std::cout << "menue:\n" <<
            "1 - add contestant with results\n" <<
            "2 - add contestant without results\n" <<
            "0 - exit";
        std::cout << "enter number of action:";
        
        switch (Scan<char>()) {
        case '0':
            std::cout << "\nGoodbye!";
            return;
        case '1':
           //
        case '2':
            //
            break;
        default:
            std::cout << "\nWrong enter!";
            break;
        }
    }
}