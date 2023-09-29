// Sample Output

// Enter no. of rows : 5
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : ";
    cin>>row;

    for (int i=1;i<=row;i++)
    {
        for (int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
