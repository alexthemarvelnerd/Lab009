#include <iostream>
using namespace std;

#include "arithmetic.h"
int sum(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int div(int a, int b) {
    if (b==0) {
        cout<<"Error. Cannot divide by 0."<<endl;
    }
    else {
        return a/b;
    }
}