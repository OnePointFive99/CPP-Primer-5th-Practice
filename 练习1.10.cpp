//Todo：使用递减运算符在循环中按照递减顺序打印出10到0之间的整数
//1.使用for循环和递减运算符
//2.遍历0到10
//3. 打印
//4.检查临界值
#include<iostream>
using std::cout; using std::endl;

int main(){
    
    for(int i = 10; i >=0;i--){
        cout<<i<<endl;
    }
    return 0;
    
}

//答案
// prints the numbers from ten down to zero.(use while)

#include <iostream>

int main()
{
    int i = 10;
    while (i >= 0)
        std::cout << i-- << " ";
    return 0;
}