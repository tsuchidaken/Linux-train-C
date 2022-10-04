#include <iostream>

using namespace std;

int foo() {
    cout << "Foo test" << endl;
}

int Hello() {
    cout << "Hello test-Branch" << endl;
}
void test2() {
    cout << "Hello test2" << endl;
}

int main() {
    cout << "Hello World" << endl;
    Hello();
    test2();
    return 0;
}