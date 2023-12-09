#include<iostream>
#include"oop.h"
using namespace std;

int main()
{
    //Animals a;
    //a.isAnimal();

    ////Bear对象调用父类的方法
    //Bear b;
    //b.isAnimal();
    //b.Animals::isAnimal();
    //b.Animal();
    //Animals a = Animals();
    //Animals c = Cat();
    //Cat c1 = Cat();
    //Cat *c2 = new Cat();
    //Animals* c3 = new Cat();//new返回的派生类指针被转换成了基类的指针
    //Bear_A ba;
    //cout << sizeof(ba);
    /*int* vptr;
    Animals a;
    memcpy(&vptr, &a, 4);
    printf("vptr=%d\n", vptr);
    printf("vptr_content = %d\n", *vptr);

    int* vptr2;
    Cat c;
    memcpy(&vptr2, &c, 4);
    printf("vptr=%d\n", vptr2);
    printf("vptr_content = %d\n", *vptr2);*/
    //Goat g;
    Bear b;
    Animals* c = &b;
    c->Animal();
    b.Animal();

    ////Dog对象只能在堆上生成
    //Dog *d = Dog::Create();
    //d->isAnimal();
    //d->Destory();
    ////Fish对象只能在栈上生成
    //Fish f = Fish();
    //f.isAnimal();
    getchar();


    return 0;
}