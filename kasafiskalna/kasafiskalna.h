#pragma once

#include <vector>
#include <string>
#include <fstream>

using namespace std;

class spis{
    const int ilosc  = 10;
    vector <vector <string>> p;
    ifstream baza;
public:
    spis(); // pusty konstruktor
    bool otworzbaza(ifstream baza, char separator = '^');
    bool zamknijbaza(ifstream baza);

    void wczytaniespis();



};
