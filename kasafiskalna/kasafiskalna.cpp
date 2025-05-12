#include "kasafiskalna.h"
#include <fstream>
#include <string>
#include <vector>
void spis::wczytaniespis() // separator  ='^'
{

}

bool otworzbaza(ifstream baza, char separator = '^')
{
    baza.open("baza.txt");
    if(!baza.is_open())
    {
        return false;}
        return true;
}
bool zamknijbaza(ifstream baza)
{
    baza.close();
    if(baza.is_open())
    {
        return false;}
    return true;

}
