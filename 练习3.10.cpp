#include <iostream>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1 = "this\ this is a, real life!!!!";
    for(auto& c:str1){
       if(!ispunct(c)){
           cout<<c;
       }
    }


    return 0;
}

答案：
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter a string of characters including punctuation." << endl;
    for (string s; getline(cin, s); cout << endl)
        for (auto i : s) 
            if (!ispunct(i)) cout << i;

    return 0;
}