#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1, str2;
    cin>>str1>>str2;
    
    if(str1==str2){
        cout<<true<<endl;
    }
    else{
        if(str1>str2){
            cout<<str1<<endl;
        }else{
            cout<<str2<<endl;
        }
        
    }

    return 0;
}
答案：
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str1, str2;
    while (cin >> str1 >> str2)
    {
        if (str1 == str2)
            cout << "The two strings are equal." << endl;
        else
            cout << "The larger string is " << ((str1 > str2) ? str1 : str2);
    }

    return 0;
}


#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1, str2;
    cin>>str1>>str2;
    
    if(str1.size()==str2.size()){
        cout<<true<<endl;
    }
    else{
        if(str1.size()>str2.size()){
            cout<<str1<<endl;
        }else{
            cout<<str2<<endl;
        }
        
    }

    return 0;
}

答案：
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    for (string str1, str2; cin >> str1 >> str2;/* */)
    {
        if (str1.size() == str2.size())
            cout << "The two strings have the same length." << endl;
        else
            cout << "The longer string is " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
    }

    return 0;
}