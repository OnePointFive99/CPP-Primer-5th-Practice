#include"Sales_item.h"
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
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
    for (auto& x : vec) {
        for (auto& c : x) {
            cout <<static_cast<char>(toupper(c));
        }
        cout << endl;
    }


    return 0;
}

学会了使用toupper,这个函数输入是char，输出是要记得转换成char
学会了使用static_cast，这也是个模板

答案：
#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> vec;
    for (string word; cin >> word; vec.push_back(word));
    for (auto &str : vec) for (auto &c : str) c = toupper(c);

    for (string::size_type i = 0; i != vec.size(); ++i)
    {
        if (i != 0 && i % 8 == 0) cout << endl;
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}