#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str;
    getline(cin, str);
    cout<<str<<endl;

    return 0;
}

答案：
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::getline;

int main()
{
    for (string str; getline(cin, str); cout << str << endl);
    return 0;
}


#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
    string str;
    cin>>str;
    cout<<str<<endl;

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
    for (string str; cin >> str; cout << str << endl);
    return 0;
}