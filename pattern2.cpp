#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int i =1;
    int count = 1;
    while (i<=n){
        int space = n - i;
        while(space>=1){
            cout<< " "<< " ";
            space--;
        }
        int j = i;
        while(j>=1){
            cout<< " " << count;
            j--;
        }
        i++;
        count++;
        cout<< endl;
    }
}