// Sample Output

// Enter no. of rows : 5
// Enter no. of columns : 5
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 
// 5 4 3 2 1 

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout<<"Enter no. of rows : "<<endl;
    cin>>row;

    cout<<"Enter no. of columns : "<<endl;
    cin>>col;

    for (int i=1;i<=row;i++)
    {
        for (int j=col;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
