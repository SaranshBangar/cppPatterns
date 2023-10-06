// Sample Output

// Enter no. of rows : 5
//     1
//    12
//   123
//  1234
// 12345

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : "<<endl;
    cin>>row;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }

        cout<<endl;
    }
    return 0;
}
