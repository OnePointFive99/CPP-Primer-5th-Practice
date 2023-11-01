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
    int i;
    vector<int> vec;
    //读入整数
    while (cin >> i) {
        vec.push_back(i);
        if (cin.get() == '\n') {
            break;
        }
    }
    for (int i = 0; i < vec.size() - 1;i++) {
        cout << vec[i] + vec[i + 1] << endl;
    }


    return 0;
}

改写：
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
    int i;
    vector<int> vec;
    //读入整数
    while (cin >> i) {
        vec.push_back(i);
        if (cin.get() == '\n') {
            break;
        }
    }
    for (int i = 0; i < (vec.size()+1) / 2;i++) {
        cout << vec[i] + vec[vec.size()-1-i] << endl;
    }


    return 0;
}

答案：
#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl; using std::cin;

int main()
{
    vector<int> ivec;
    for (int i; cin >> i; ivec.push_back(i));

    if (ivec.empty())
    {
        cout << "input at least one integer." << endl;
        return -1;
    }

    if (ivec.size() == 1)
    {
        cout << "only one integer " << ivec[0] << ", it doesn't have any adjacent elements." << endl;
        return -1;
    }

    for (int i = 0; i < ivec.size() - 1; ++i)
        cout << ivec[i] + ivec[i + 1] << " ";
    cout << endl;
    
    return 0;
}

好家伙，还加了empty和元素唯一的检查

改写：
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<int> ivec;
    for (int i; cin >> i; ivec.push_back(i));

    if (ivec.empty())
    {
        cout << "input at least one integer." << endl;
        return -1;
    }

    // If the vector has odd size, element in the middle will add to itself.
    auto size = (ivec.size() + 1) / 2;

    for (int i = 0; i != size; ++i)
        cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
    cout << endl;

    return 0;
}
这个还加了奇数情况下把中间的元素double