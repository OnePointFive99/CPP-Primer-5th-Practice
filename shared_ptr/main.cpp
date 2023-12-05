#include<iostream>
#include<memory>
#include"smartptr.h"

using std::make_shared;
using std::shared_ptr;
using std::cout;
using std::endl;

int main()
{
    //对比int *sp = 100;
    auto sp = make_shared<int>(100);
    auto mysp = SmartPtr<int>(new int(100));
    cout << "shared_ptr：" << *sp << endl;
    cout << "My shared_ptr：" << *mysp << endl;
    cout << "shared_ptr use_count：" << sp.use_count() << endl;
    cout << "My shared_ptr use_count：" << mysp.use_count() << endl;
    cout << "shared_ptr unqiue：" << sp.unique() << endl;
    cout << "My shared_ptr unique：" << mysp.unique() << endl;
    auto sp2 = shared_ptr<int>(sp);
    auto mysp2 = SmartPtr<int>(mysp);
    cout << "shared_ptr use_count：" << sp.use_count() << endl;
    cout << "My shared_ptr use_count：" << mysp.use_count() << endl;
    cout << "shared_ptr unqiue：" << sp.unique() << endl;
    cout << "My shared_ptr unique：" << mysp.unique() << endl;

    auto p = sp.get();
    auto myp = mysp.get();

    auto sp3 = make_shared<int>();
    auto mysp3 = SmartPtr<int>();
    sp3 = sp2;
    mysp3 = mysp2;
    cout << "shared_ptr use_count：" << sp.use_count() << endl;
    cout << "My shared_ptr use_count：" << mysp.use_count() << endl;
    cout << "shared_ptr unqiue：" << sp.unique() << endl;
    cout << "My shared_ptr unique：" << mysp.unique() << endl;

    auto sp4 = make_shared<int>(10);
    auto mysp4 = SmartPtr<int>(new int(10));
    mysp3 = mysp4;
    sp3 = sp4;
    cout << "shared_ptr use_count：" << sp.use_count() << endl;
    cout << "My shared_ptr use_count：" << mysp.use_count() << endl;
    cout << "shared_ptr unqiue：" << sp.unique() << endl;
    cout << "My shared_ptr unique：" << mysp.unique() << endl;

    getchar();
    return 0;
}