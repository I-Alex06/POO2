//clase admin,user   --conversie de tip (fac un utilizator ->admin)
//clasa meniu  cu functie vituala (descriere,pointer la functie)2 vectori stl
//#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "user.cpp"
#include "admin.cpp"
#include "usern.cpp"
#include "UsersV.cpp"
#include "UsersV.hpp"
#include "Produs.hpp"
#include "ProduseV.hpp"
#include "ProduseV.cpp"
//#include "glob.h"
#include <typeinfo>
//std::vector<std::shared_ptr<User>> users;
// std::vector<std::unique_ptr<User>>* getUsers(){
//     return &users;
// }
#include "mainMenu.cpp"

int main()
{
    std::cout << "Hello World2!\n";
    /*std::vector<std::unique_ptr<User>> users;*/
    UsersV* users=UsersV::getInstance();
    Admin a("admin","admin","admin1@gmail.com");
    users->adaugaUser(std::make_shared<Admin>(a));
    UserN u("alex","alex","alex@gmail.com");
    users->adaugaUser(std::make_shared<UserN>(u));
    users->adaugaUser(std::make_shared<UserN>(UserN("alex2","alex2","alex2@yaoo.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("adew3","fwefwe3","wfe3w@hotmail.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("alex4","alex4","wfew4@hotmail.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("ade5w","fwefwe5","wfew@5hotmail.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("ad6ew","fwefwe6","wfew@h6otmail.com")));
    users->adaugaUser(std::make_shared<Admin>(Admin("a7dew","fwefwe7","wfew@ho7tmail.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("8adew","fwefwe8","wfew@hot8mail.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("adew9","fwefwe9","wfew9@hotmail.com")));
    users->adaugaUser(std::make_shared<UserN>(UserN("ad10ew","fwefw10e","wfew10@hotmail.com")));
    std::cout<<"------------------"<<std::endl;
    //std::cout<<users.get_users()<<std::endl;
    users->modificaUser(1,std::static_pointer_cast<UserN>(users->get_users()->at(0)));
    for(auto& user:*users->get_users())
    {
        //std::cout<<typeid(*user).name()<<std::endl;
        //std::cout<<"OK\n"<<user<<std::endl;
        user->PrintInfo();
    }
    std::cout<<"------------------"<<std::endl;
    //std::vector<std::shared_ptr<User>>* usr=users->get_users();
    //std::vector<std::shared_ptr<User>> usr2=*users->get_users();
    //usr2[4]->showOptiuni();
    // std::cout<<usr2.size()<<std::endl;
    //Mainloop m;
    MainMenu m;
    return 0;
}