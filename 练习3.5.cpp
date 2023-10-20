#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1, str2;
    while(cin>>str1){
        str2 += str1;
        cout<<str2<<endl;
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
    string concatenated;
    for (string buffer; cin >> buffer; concatenated += buffer);
    cout << "The concatenated string is " << concatenated << endl;

    return 0;
}

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str1, str2;
    while(cin>>str1){
        if(!str1.empty()){
             str2 += ' ' + str1;
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
    string str;
    for (string buff; cin >> buff; str += (str.empty() ? "" : " ") + buff);
    cout << "The concatenated string is " << str << endl;

    return 0;
}