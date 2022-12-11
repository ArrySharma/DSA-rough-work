#include<iostream>
using namespace std;

char evod(){
    int n;
    cin>>n;
    char a = 'E';

    if (n & 1){
       a = 'O';
    }
    return a;
    
    
    
}

int main(){
    cout<< evod();

}