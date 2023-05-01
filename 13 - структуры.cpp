#include "Compety.hpp"

#include <vector>
#include <iostream>

struct Contestant {
    //to-do:
    // создать поля для структуры такие чтобы все функции могли нормально работать

    std::string name;
    int id;
    std::array<double, 3> results;
    int stage;
};

Contestant* Create(int id, std::string name, std::array<double, 3> results)
{
    //to-do:
    // создать новый объект структуры на основании  переданных данных
    //

    Contestant* result;
    result = new Contestant;

    result->id = id;
    result->name = name;
    result->results = results;
    return result;
}

void Delete(Contestant* obj)
{
    //to-do:
    // уничтожить переданный объект стурктуры
    //
    if (obj == nullptr)
        delete obj;
}

void Update(Contestant* obj, int newId)
{
    //to-do:
    // изменить данные по идентификатору в объекте
    //

    obj->id = newId;

}

void Update(Contestant* obj, std::string newName)
{
    //to-do:
    // изменить данные по имени в объекте
    //

    obj->name = newName;
}

void Update(Contestant* obj, int stage, double result)
{
    //to-do:
    // изменить данные по результату конкретной попытки в объекте
    //

    obj->results[stage] = result;
}

void AddStage(Contestant* obj, double result)
{
    //to-do:
    // добавить значение новой попытки
    // заменить самое маленькое значение
    //
    int position = 0;
    double minimum = obj->results[0];

    for (int i = 0; i < obj->results.size(); i++)
    {
        if (obj->results[i] < minimum)
        {
            minimum = obj->results[i];
            position = i;
        }
    }
    obj->results[position] = result;

}

std::string Name(Contestant* obj)
{
    //to-do:
    // собщить клиентскому коду имя хранящееся в объекте
    //

    return obj->name;
}

int Id(Contestant* obj)
{
    //to-do:
    // сообщить клиентскому коду значение идентификатора
    //
    return obj->id;
}

double Result(Contestant* obj)
{
    //to-do:
    // сообщить клиентскому коду лучший результат из всех попыток
    //

    int position = 0;
    int maximum = obj->results[0];

    for (int i = 0; i < obj->results.size(); i++)
    {
        if (obj->results[i] > maximum)
        {
            maximum = obj->results[i];
            position = i;
        }
    }
    return obj->results[position];
}

double Average(Contestant* obj)
{
    //to-do:
    // сообщить пользователю срезднееарифметическое всех не нулевых попыток
    //
    return 0.0;
}

double Worst(Contestant* obj)
{
    //to-do:
    // сообщить пользователю результат хужщей попытки
    //
    int position = 0;
    int minimum = obj->results[0];

    for (int i = 0; i < obj->results.size(); i++)
    {
        if (obj->results[i] < minimum)
        {
            minimum = obj->results[i];
            position = i;
        }
    }

    return obj->results[position];
}

void Print(Contestant* obj)
{
    //to-do:
    // вывести на экран карточку участника
    //
    std::cout << "Name: " << obj->name << '\n' <<
        "Id: " << obj->id << '\n' <<
        "Stage: " << obj->stage;
    std::cout << "Results: ";
    for (int i = 0; i < obj->results.size(); i++)
    {
        std::cout << obj->results[i] << ', ';
    }

}

//-----------------------------------------------------------------------------

namespace {
    //to-do:
    // создать какой то глобальный объект через который будут работать 
    // следующие функции
    //
}

void Init()
{
    //to-do:
    // инициализация глобального объекта
    //
}

void Add(Contestant* obj)
{
    //to-do:
    // добавить нового участника в список участников
    //
}

Contestant* Search(int id)
{
    //to-do:
    // найти в коллекции участника с указанным id и передать пользователю
    //
    return nullptr;
}

Contestant* Search(std::string newName)
{
    //to-do:
    // найти участник с указанным именем и передать пользователю
    //
    return nullptr;
}

std::array<const Contestant*, 3> BestRaw()
{
    //to-do:
    // 
    //
    return std::array<const Contestant*, 3>();
}

std::array<const Contestant*, 3> BestPerformance()
{
    //to-do:
    // сообщить пользователю 3х лучший по их среднему результату
    //
    return std::array<const Contestant*, 3>();
}

void PrintRaw()
{
    //to-do:
    // Вывести всех имеющийся участков со всеми результатами ненулевых попыток
    // как есть и без специальных сортировок
    //
}

void PrintByScore()
{
    //to-do:
    // Вывести всех имеющийся участков с их максимальным результатом
    // в порядке убывания результата
    // 
}

void PrintByPerformance()
{
    //to-do:
    // Вывести всех имеющийся участков с их средним результатом
    // в порядке убывания результата
}

void Terminate()
{
    //to-do:
    // произвести очитку глобального объекта
    //
}