#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int i = 1;
    
    while(i<=n){
        int count = i;
        int space =  i - 1;
        while(space>=1){
            cout<< " " << " ";
            space--;
        }
        int j = n - i + 1;
        while(j>=1){
            cout<< " " << count;
            count++;
            j--;
        }
        i++;
        cout<< endl;
    }
}