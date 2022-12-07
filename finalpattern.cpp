#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int i = 1;

    while(i<=n){

        // first triangle
        // int count = 1;
        int j = 1;
        while(j<=n - i + 1){
            cout<< " " << j;
            // count++;
            j++;

        }

        // Second (Star) pattern
        int s = (2*i) - 2;
        while(s>=1){
            cout << " " << "X";
            s--;
        }

        // third pattern
        int k = n - i + 1;
        // int counttwo = n - i + 1;
        while(k){
            cout<< " " << k;
            // counttwo--;
            k--;
        }



        cout<< endl;
        i++;







    }


}