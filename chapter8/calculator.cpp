#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout << "Enter the value of a: " << endl;
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation: " ;
    cin >> op;
    cout << endl;

    switch(op){

        case '+': cout << (a+b) << endl;
                    break;

        case '-': cout << (a-b) << endl;
                    break;

        case '*': cout << (a*b) << endl;
                    break;

        case '/': cout << (a/b) << endl;
                    

        case '%': cout << (a%b) << endl;
                    break;

        default: cout << "Invalid opration" << endl;
                    break;
    }

    return 0;
}