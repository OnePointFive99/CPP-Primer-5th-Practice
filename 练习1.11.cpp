//todo:提示用户输入两个整数，打印这两个整数范围内的所有整数
//1.提示文字
//2.变量接受
//3.比大小
//4.循环打印

#include<iostream>

using std::cout; using std::endl; using std::cin;
int main(){
    int low,high;
    cout<<"请输入两个整数："<<endl;
    cin>>low>>high;
    if(low>high){
        int temp;
        temp = low;
        low = high;
        high = temp;
    }
    for(int i = low; i <= high; i++){
        cout<<i<<" "<<endl;
    }
    
    return 0;
}

//答案
// Print each number in the range specified by two integers.

#include <iostream>

using std::cout;
using std::cin;

void print_range(int lo, int hi)
{
    if (lo > hi)
    {
        print_range(hi, lo);
        return;
    }
    for (int i = lo; i != hi; ++i)
        cout << i << " ";
}

int main()
{
    int low = 0, high = 0;
    cout << "please input two integers:\n";
    cin >> low >> high;
    print_range(low, high);
    return 0;
}