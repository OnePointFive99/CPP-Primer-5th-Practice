#pragma once
#ifndef SMART_PTR_H
#define SMART_PTR_H
#include<iostream>

template<typename T>
class SmartPtr
{
public:
    //默认构造函数
    SmartPtr() :ptr(nullptr), count(nullptr) {}
    //传指针构造函数
    SmartPtr(T* _ptr) : ptr(_ptr), count(nullptr) 
    {
        if (_ptr)count = new int(1);
    }
    //拷贝构造函数
    SmartPtr(const SmartPtr& smp)
    {
        ptr = smp.ptr;
        count = smp.count;
        if (count)(*count)++;
    }
    //析构函数
    ~SmartPtr()
    {
        reset();
    }
    //重载=运算符
    SmartPtr& operator=(const SmartPtr& smp)
    {
        if (this == &smp)//指向同一块共享内存
        {
            return *this;
        }

        reset();//不一块内存，递减count
        this->ptr = smp.ptr;
        this->count = smp.count;
        if (count)(*count)++;

        return *this;
    }
    //重载*运算符
    T operator*() {
        return *(this->ptr);
    }
    //重载->运算符
    T* operator->() {
        return this->ptr;
    }
    //取出原始指针
    T* get()
    {
        return this->ptr;
    }
    //检查是否只有一个共享指针
    bool unique()
    {
        return *count == 1;
    }
    //返回计数器
    int use_count()
    {
        return *count;
    }
    //析构时削减共享计数并检查
    void reset()
    {
        if (count)
        {
            (*count)--;
            if (*count == 0)
            {
                delete this->ptr;
                delete this->count;
            }
        }
    }

private:
    T* ptr;
    int* count;
};

#endif // !SMART_PTR_H

