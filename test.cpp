#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    
    int divider = 1;
    int product = 1;
    int sum = 0;
    for(int num = n; n / divider>=1; num = n / divider){
        product = product * (num % 10);
        sum = sum + (num % 10);
        divider = divider * 10;
        
    }
    cout << product - sum;



}