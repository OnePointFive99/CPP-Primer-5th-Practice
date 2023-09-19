#include <iostream>
#include <string>
using namespace std;

string CheckTypeOfVar(auto var){
    return typeid(var).name();
}

int main() {
   const int i = 42;
   auto j = i;
   const auto &k = i;
   auto *p = &i;
   const auto j2 = i, &k2 = i;
   cout<<"j: "<<CheckTypeOfVar(j)<<endl;
   cout<<"k: "<<CheckTypeOfVar(k)<<endl;
   cout<<"p: "<<CheckTypeOfVar(p)<<endl;
   cout<<"j2: "<<CheckTypeOfVar(j2)<<endl;
   cout<<"k2: "<<CheckTypeOfVar(k2)<<endl;
   /*
    j 是一个普通的整数，数据类型是 int。
    k 是一个常量引用，指向一个整数，数据类型是 const int&。
    p 是一个指向常量整数的指针，数据类型是 const int*。
    j2 是一个常量整数，数据类型是 const int。
    k2 是一个常量引用，指向一个整数，数据类型是 const int&。
   */

   

    return 0;
}