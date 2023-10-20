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