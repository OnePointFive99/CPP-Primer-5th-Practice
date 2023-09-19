#include <iostream>

int main() {
   int i =0,&r=i;
   auto a = r;
   const int ci = i, &cr = ci;
   auto b = ci;
   auto c = cr;
   auto d = &i;
   auto e = &ci;
   const auto f = ci;
   auto &g = ci;
   auto &h = 42;//error 不能为一个非常量引用绑定常数
   const auto &j = 42;
   
   a = 42;
   b = 42;
   c = 42;
   d = 42;//error 不能进行int 到 int*类型的转换
   e = 42;//error 不能进行int 到int*类型的转换
   *e = 42;//error *e是只读的内存，即常量指针不能赋值
   g = 42;//error g是常量的引用，也不能赋值

    return 0;
}