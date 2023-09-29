// Sample Output

// Enter no. of rows : 5
// 5 4 3 2 1 
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : ";
    cin>>row;

    for (int i=1;i<=row;i++)
    {
        for (int j=row*2;j>row;j--)
        {
            cout<<j-row<<" ";
        }
        cout<<endl;
    }
    return 0;
}