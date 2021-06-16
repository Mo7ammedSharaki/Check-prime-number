#include <iostream>
using namespace std;
int main()
{
    int flag = 1, j = 2;
    int num;
    cout << "enter the number : ";
    cin >> num;
    if (num <= 1)
    {
        cout << "num is not a prime number";
    }
    else
    {
        while(j<(num/2)+1){
            if (num%j==0){
                flag=0;
            }
            j = j + 1;
        }
        if (flag==0){
            cout << "num is not a prime number";
        }
        else{
            cout << "prime";
        }
    }
}
