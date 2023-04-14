#ifndef COMPETY_HPP
#define COMPETY_HPP

#include <string>
#include <array>

struct Contestant;

Contestant* Create(int id, std::string name, std::array<double, 3> results = {.0, .0, .0});
void Delete(Contestant* obj);

void Update(Contestant* obj, int newId);
void Update(Contestant* obj, std::string newName);
void Update(Contestant* obj, int stage, double result);

void AddStage(Contestant* obj, double result);

std::string Name(Contestant* obj);
int Id(Contestant* obj);
double Result(Contestant* obj);
double Average(Contestant* obj);
double Worst(Contestant* obj);

void Print(Contestant* obj);

//-----------------------------------------------------------------------------

void Init();
void Add(Contestant* obj);
Contestant* Search(int id);
Contestant* Search(std::string newName);
std::array<const Contestant*, 3> BestRaw();
std::array<const Contestant*, 3> BestPerformance();

void PrintRaw();
void PrintByScore();
void PrintByPerformance();

void Terminate();




#endif // !COMPETY_HPP
