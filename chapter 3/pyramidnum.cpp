#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;

    int i = 1;
    

    while(i<=n){
        int j = n + i - 1;
        int space = n - i;
        int count = 1;
        while(j>=1){
            while(space>=1){
                cout << " " << " ";
                space--;
                j--;
            }
            while(count<=i){
                cout<< " " << count;
                count++;
                j--;
            }
            count = count -2;
            while(count>0){
                cout<< " " << count;
                count--;
                j--;
            }
            
            

        }
        i++;
        
        cout<< endl;
    }


















}
