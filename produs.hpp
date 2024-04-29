#pragma once
#include <string>

class Produs{
    protected:
        std::string nume;
        double pret;
        int cantitate;
    public:
        Produs(const std::string& _nume,const double _pret,const int _cantitate);
        //virtual void PrintInfo();
        std::string getNume();
        double getPret();
        int getCantitate();
        void setNume(const std::string& _nume);
        void setPret(const double _pret);
        void setCantitate(const int _cantitate);
        
};