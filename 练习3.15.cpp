#include"Sales_item.h"
#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string i;
    vector<string> vec;
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

答案：
#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> vec;
    for (std::string buffer; std::cin >> buffer; vec.push_back(buffer));

    return 0;
}