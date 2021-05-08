#include <iostream>
#include <clocale>

using namespace std;

void ARR(){
    int array[] = {1,0,0,1,0,1,0,1};
    int b;
    b = sizeof(array)/sizeof(array[0]);
    for (int i = 0; i < b; i++){
        if (array[i] == !1){
            array[i] = 1;
        } else if (array[i] == !0){
            array[i] = 0;
        }
        cout << array[i] << ' ';
    }
    cout << endl;
}

void ARR2(){
    int array[8] = {};
    int b;
    int c = 1;
    b = sizeof(array)/sizeof(array[8]);
    for (int i = 0; i < b; i++){
        array[i] = c;
        c = c + 2;
        cout << array[i] << ' ';
    }
    cout << endl;
}

bool ARR3(int array[], const int size){

    for (int i = 0; i < size; i++){
        int sum = 0;
        for (int j = 0; j < i; j++){
            sum = sum + array[j];
        }
        for (int j = i; j < size; j++){
            sum = sum - array[j];
        }
        if (sum == 0){
            return true;
        }
    }
    return false;
}

void ARR4(int array[], const int SIZE){
    string sim;
    int chislo_it;
    cout << "enter the number to shift ";
    cin >> chislo_it;
    cout << endl;
    cout << "enter side (<< or >>) ";
    cin >> sim;
    if (sim == "<<"){
        for (int i = 0; i < chislo_it; i++){
                int tmp = array[0];
                for (int i = 0; i < SIZE - 1; i++){
                    array[i] = array[i + 1];
                }
                array[SIZE - 1] = tmp;
        }
        for (int i = 0; i < SIZE; i++){
            cout << array[i];
        }  
    } 
    else if (sim == ">>"){
        for (int i = 0; i < chislo_it; i++){
            int tmp = array[SIZE - 1];
            for (int i = SIZE - 1; i > 0; i--){
                array[i] = array[i - 1];
            }
            array[0] = tmp;
        }
        for (int i = 0; i < SIZE; i++){
            cout << array[i];
        }   
    }
}