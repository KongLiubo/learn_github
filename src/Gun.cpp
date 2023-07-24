#include "Gun.h"
#include "iostream"
using namespace std;

void Gun::addBullet(int bullet_num)
{
    this->_bullet_count += bullet_num;
}


bool Gun::shoot()
{
    if (this->_bullet_count <= 0)
    {
        cout << "There is no bullet !" << endl;
        return false;
    }

    this->_bullet_count -= 1;

    return true;
}

int Gun::getBullet_num(void)
{
    return this->_bullet_count;
}

std::string Gun::getGun_type(void)
{
    return this->_type;
}
