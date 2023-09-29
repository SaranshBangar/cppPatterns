// Sample Output

// Enter no. of rows : 5
// Enter no. of columns : 5
// Enter the power : 3
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 
// 1 8 27 64 125 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int row, col, power;

    cout<<"Enter no. of rows : ";
    cin>>row;

    cout<<"Enter no. of columns : ";
    cin>>col;

    cout<<"Enter the power : ";
    cin>>power;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            cout<<pow(j,power)<<" ";
        }
        cout<<endl;
    }
    return 0;
}