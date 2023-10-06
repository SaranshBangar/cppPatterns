// Sample Output

// Enter no. of rows : 5
// Enter no. of columns : 5      
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5 

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout<<"Enter no. of rows : ";
    cin>>row;

    cout<<"Enter no. of columns : ";
    cin>>col;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
