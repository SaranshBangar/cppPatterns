// Sample Output

// Enter no. of rows : 5
//     1
//    121
//   12321
//  1234321
// 123454321


#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : "<<endl;
    cin>>row;

    for (int i=1;i<=row;i++)
    {
        for (int j=row-i;j>=1;j--)
        {
            cout<<" ";
        }
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for (int j=i-1;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
