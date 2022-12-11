#include<iostream>
using namespace std;

int currency(){
int n;
cin>> n;
cout << "The number of 100s, 50s 20, and 1s notes required for " << n << " are:" << endl
<< n / 100 << " (100s)" << endl 
<< (n % 100) / 50 << " (50s)" << endl 
<< ((n % 100) % 50) / 20 << " (20s)" << endl 
<< ((((n % 100)) % 50) % 20) / 1 << " (1s)" << endl; }

int main(){
    currency();
}