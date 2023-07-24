#pragma once

#include <string>
#include "Gun.h"

class Solider
{
public:
    Solider(std::string name);
    ~Solider();
    // void addGun(Gun &gun);
    void addGun(Gun gun);
    void addBulletToGun(int num);
    bool fire();

private:
    std::string _name;
    Gun *_ptr_gun;
};