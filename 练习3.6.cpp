#include <iostream>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1 = “this is a real lfe...”;
    for(auto& c:str1){
        if(isalpha(c)){//注意字符与字母的区别
            c = 'X';
        }
        
    }
    cout<<str1<<endl;

    return 0;
}

答案：
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
    string str("a simple string");
    for (auto &c : str) c = 'X';
    cout << str << endl;

    return 0;
}