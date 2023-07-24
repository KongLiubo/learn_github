#include "headfile.h"

void test()
{
    Solider xusanduo("xusuanduo");
    Gun useGun("AK47");
    xusanduo.addGun(useGun);
    xusanduo.addBulletToGun(20);

    while(xusanduo.fire() != 0)
    {
        int temp_num;
        temp_num = useGun.getBullet_num();
        printf("number is %d", temp_num);
    }
}

int main()
{
    int klb = 10;
    test();
    return 0;
}

