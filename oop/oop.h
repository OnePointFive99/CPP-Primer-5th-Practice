#pragma once
#ifndef OOP_H
#define OOP_H
#include<iostream>
#include<string>

using namespace std;

class Animals {
public:
    int loc;
    string name;

    void isAnimal() 
    {
        cout << "Class Animals" << '\n';
    }

    virtual void Animal()
    {
        cout << "Animal" << '\n';
    }

};
// 实验虚函数
class Bear :  public Animals
{
public:
    enum Dances { };	//枚举类型默认使用int方式存储，占用4字节

    Dances dances_known;
    int cell_block;

    void isAnimal()
    {
        cout << "Class Bear" << '\n';
    }

    void Animal() override
    {
        cout << "Class Bear" << '\n';
    }
};

//class MeatEater : virtual public Animals
//{
//public:
//    void isAnimal()
//    {
//        cout << "Class MeatEater" << '\n';
//    }
//};
//
//class Bear_A : public Bear, public MeatEater
//{
//public:
//    void isAnimal()
//    {
//        cout << "Class Bear_A" << '\n';
//    }
//};
//
//class Cat :   Animals
//{
//public:
//    Cat(){}
//    virtual void Animal()
//    {
//        cout << "Cat" << '\n';
//    }
//};
//
////只能在堆上生成
//class Dog : Animals
//{
//public:
//    void isAnimal()
//    {
//        cout << "Class Dog" << '\n';
//    }
//
//    static Dog* Create()
//    {
//        cout << "Create Dog" << '\n';
//        return new Dog();
//    }
//
//    void Destory()
//    {
//        cout << "Destory Dog" << '\n';
//        delete this;
//    }
//
//protected:
//    Dog(){}
//    ~Dog(){}
//};
//
////只能在栈上生成
//class Fish :Animals
//{
//private:
//    void* operator new(size_t t){}//需要一个size_t参数,返回分配对象的指针
//    void operator delete(void * ptr){}//需要一个泛型指针参数，返回值为空
//
//public:
//    Fish() { cout << "Create Fish" << '\n'; }
//    ~Fish() { cout << "Destory Fish" << '\n'; }
//
//    void isAnimal()
//    {
//        cout << "Class Fish" << '\n';
//    }
//};
//
//class Goat {
//
//};
#endif // !OOP_H
