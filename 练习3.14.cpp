#include"Sales_item.h"
#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int i;
    vector<int> vec;
    //打印输入的工作目录
    while (cin >> i) {
        vec.push_back(i);
        if (cin.get() == '\n') {
            break;
        }
    }
    for (auto x : vec)cout << x << endl;


    return 0;
}
新学到了如何终止cin：用cin.get()

答案：

//
//@Author  @PEZY @Yue Wang 
//@Date    Aug. 2014 Jun.2015
//@Brief
// read a sequence of ints from cin and
// store those values in a vector.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for (int i; std::cin >> i; vec.push_back(i));

    return 0;
}