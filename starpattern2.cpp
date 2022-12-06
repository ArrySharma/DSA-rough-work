#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;
    int i = 1;
    
    while(i<=n){
        int j = 1;
        
        
        while(j<=n){
            int space = i -1;
            
            while(space>=1){
                cout<< " " << " ";
                space--;
            }
            cout<< " " << "*";
            
            j++;
        }
        cout<< endl;
        i++;
    }




}