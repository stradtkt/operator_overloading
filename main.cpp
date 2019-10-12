#include <iostream>
#include "ComplexNumberClass.h"
using namespace std;

//class Test {
//private:
//    int id;
//    string name;
//public:
//    Test(): id(0), name("") {
//
//    }
//    Test(int id, string name): id(id), name(name) {
//
//    }
//    void print() {
//        cout << id << ": " << name << endl;
//    }
//    const Test &operator=(const Test &other) {
//        cout << "Assignment running" << endl;
//        id = other.id;
//        name = other.name;
//        return *this;
//    }

//    friend ostream &operator<<(ostream &out, const Test &test) {
//        out << test.id << ": " << test.name;
//        return out;
//    }
//};


int main() {
//    Test test1(10, "Kevin");
//    cout << "Print test1 " << flush;
//    test1.print();
//    Test test2(20, "Patrick");
//    test2 = test1;
//    cout << "Print test2 " << flush;
//    test2.print();
//    Test test3;
//    test3.operator=(test2);
//    cout << "Print test3 " << flush;
//    test3.print();


//    Test test1(10, "Kevin");
//    Test test2(11, "Patrick");
//    cout << test1 << endl;
//    cout << test2 << endl;

    cout << "----Complex Number Class----" << endl;
    ComplexNumberClass c1(2,3);
    ComplexNumberClass c2 = c1;
    return 0;
}