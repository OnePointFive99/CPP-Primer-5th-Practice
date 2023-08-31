/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int i;
    long l;
    long long ll;
    short s;
    
    
    cout<<sizeof(i)<<endl;
    cout<<sizeof(l)<<endl;
    cout<<sizeof(ll)<<endl;
    cout<<sizeof(s)<<endl;
    
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;
    unsigned short us;
    
    cout<<sizeof(ui)<<endl;
    cout<<sizeof(ul)<<endl;
    cout<<sizeof(ull)<<endl;
    cout<<sizeof(us)<<endl;
    
    printf("\nchar的范围为: %d —— %d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char的范围为: %u —— %u\n\n", 0, UCHAR_MAX);
 
    printf("short的范围为: %hd —— %hd\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short的范围为: %hu —— %hu\n\n", 0, USHRT_MAX);
 
    printf("int的范围为: %d —— %d\n", INT_MIN, INT_MAX);
    printf("unsigned int的范围为: %u —— %u\n\n", 0, UINT_MAX);
 
    printf("long的范围为: %ld —— %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long的范围为: %lu —— %lu\n\n", 0, ULONG_MAX);
 
    printf("long long的范围为: %lld —— %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long的范围为: %llu —— %llu\n\n", 0, ULLONG_MAX);

    /*
4
8
8
2
4
8
8
2

char的范围为: -128 —— 127
unsigned char的范围为: 0 —— 255

short的范围为: -32768 —— 32767
unsigned short的范围为: 0 —— 65535

int的范围为: -2147483648 —— 2147483647
unsigned int的范围为: 0 —— 4294967295

long的范围为: -9223372036854775808 —— 9223372036854775807
unsigned long的范围为: 0 —— 18446744073709551615

long long的范�为: -9223372036854775808 —— 9223372036854775807
unsigned long long的范围为: 0 —— 18446744073709551615
*/
    return 0;
}
