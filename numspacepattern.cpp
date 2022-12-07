#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;

    int i = 1;
    int counter = 1;
    while (i <= n)
    {

        int space = i - 1;  
        while (space>=1)  // change 1.1
        {
            cout << " ";
            space--;      // change 1.2
        }

        int j = i;
        
        while (j <= n)
        {
            cout << counter;
            j++;
        }
        counter++;
        cout <<endl;
        i++;
    }

    
}