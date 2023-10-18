// ToDo：用while循环将50到100的整数相加
// 1.while循环
// 2，声明sum，初始值
//3. 循环记录并相加
//4.检查临界值
#include <iostream>
using std::cout;using std::endl;
int main() {
    int num = 50, sum = 0;
    while(num<=100){
        sum += num++;
    }
    cout<<sum<<endl;

    return 0;
}

// 官方：
// sum the numbers from 50 to 100 (use while)

#include <iostream>

auto sum(int lo, int hi)
{
    int sum = 0;
    while (lo <= hi) sum += lo++;
    return sum;
}

int main()
{
    std::cout << "Sum of 50 to 100 inclusive is: " << sum(50, 100) << std::endl;
    return 0;
}