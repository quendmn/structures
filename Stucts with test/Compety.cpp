#include "Compety.hpp"

#include <vector>
#include <iostream>

struct Contestant {
    //to-do:
    // создать поля ждя структуры такие чтобы все функции могли нормально работать
    //
};

Contestant* Create(int id, std::string name, std::array<double, 3> results)
{
    //to-do:
    // создать новый объект структуры на основании  переданных данных
    //
    return nullptr;
}

void Delete(Contestant* obj)
{
    //to-do:
    // уничтожить переданный объект стурктуры
    //
}

void Update(Contestant* obj, int newId)
{
    //to-do:
    // изменить данные по идентификатору в объекте
    //
}

void Update(Contestant* obj, std::string newName)
{
    //to-do:
    // изменить данные по имени в объекте
    //
}

void Update(Contestant* obj, int stage, double result)
{
    //to-do:
    // изменить данные по результату конкретной попытки в объекте
    //
}

void AddStage(Contestant* obj, double result)
{
    //to-do:
    // добавить значение новой попытки
    // заменить самое маленькое значение
    //
}

std::string Name(Contestant* obj)
{
    //to-do:
    // собщить клиентскому коду имя хранящееся в объекте
    //
    return std::string();
}

int Id(Contestant* obj)
{
    //to-do:
    // сообщить клиентскому коду значение идентификатора
    //
    return 0;
}

double Result(Contestant* obj)
{
    //to-do:
    // сообщить клиентскому коду лучший результат из всех попыток
    //
    return 0.0;
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
    return 0.0;
}

void Print(Contestant* obj)
{
    //to-do:
    // вывести на экран карточку участника
    //
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
