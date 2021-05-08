#include <iostream>
#include "foo.h"

using namespace std;

int main(){
    const int SIZE = 8;
    int a[SIZE] = {1,1,1,1,1,1,5,1};
    //a[SIZE] = {1,1,1,1,1,1,1,7};
    ARR();
    ARR2();
    cout << ARR3(a, SIZE);
    ARR4(a, SIZE);
    return 0;
}