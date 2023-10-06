// Sample Output

// Enter no. of rows : 5
// *********
//  *******
//   *****
//    ***
//     *

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : "<<endl;
    cin>>row;

    for (int i=0;i<=row;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<" ";
        }

        for (int j=row-i;j>=1;j--)
        {
            cout<<"*";
        }
        
        for (int j=row-i-1;j>=1;j--)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}
