#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter any amount " ;
    cin >> n;

    char ch = 'n';

    switch('n'){

        case 'n': cout << "The number of 100s, 50s 20, and 1s notes required for " << n << " are:" << endl;

        case 100: cout << n / 100 << " (100s)" << endl;

        case 50: cout << (n % 100) / 50 << " (50s)" << endl;

        case 20: cout << ((n % 100) % 50) / 20 << " (20s)" << endl;

        case 1: cout << ((((n % 100)) % 50) % 20) / 1 << " (1s)" << endl; 
    }
    }


