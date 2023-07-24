#include "Solider.h"
#include "iostream"

Solider::Solider(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
}

Solider::~Solider()
{
    if(this->_ptr_gun == nullptr)
    {
        return;
    }

    delete this->_ptr_gun;
    this->_ptr_gun = nullptr;
}

// void Solider::addGun(Gun &gun)
// {
//     this->_ptr_gun = &gun;
// }

void Solider::addGun(Gun gun)
{
    // this->_ptr_gun = &gun;
    this->_ptr_gun = new Gun(gun);
}

void Solider::addBulletToGun(int num)
{
    this->_ptr_gun->addBullet(num);
}

bool Solider::fire()
{
    if (this->_ptr_gun->getBullet_num() <= 0)
    {
        std::cout << "There is not any bullet" << std::endl;
        return false;
    }

    this->_ptr_gun->shoot();
    std::cout << "fire successfully, and the residue bullets are " <<this->_ptr_gun->getBullet_num() << std::endl;
    return true;   
}


