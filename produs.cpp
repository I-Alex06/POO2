#include "produs.hpp"
#include <iostream>

Produs::Produs(const std::string& _nume,const double _pret,const int _cantitate)
{
    nume=_nume;
    pret=_pret;
    cantitate=_cantitate;
}
std::string Produs::getNume()
{
    return nume;
}
double Produs::getPret()
{
    return pret;
}
int Produs::getCantitate()
{
    return cantitate;
}
void Produs::setNume(const std::string& _nume)
{
    nume=_nume;
}
void Produs::setPret(const double _pret)
{
    pret=_pret;
}
void Produs::setCantitate(const int _cantitate)
{
    cantitate=_cantitate;
}
// Produs::~Produs()
// {
//     std::cout<<"Produsul "<<nume<<" a fost sters"<<std::endl;
// }