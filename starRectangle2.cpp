// Sample Output

// Enter no. of rows : 5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : ";
    cin>>row;

    for (int i=0;i<row;i++)
    {
        for (int j=1;j<=row-i;j++)
        {
            cout<<"*";
        }
        
        for (int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for (int j=0;j<i;j++)
        {
            cout<<" ";
        }
        
        for (int j=1;j<=row-i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    
    for (int i=1;i<=row;i++)
    {
        for (int j=0;j<i;j++)
        {
            cout<<"*";
        }
        
        for (int j=row-i;j>=1;j--)
        {
            cout<<" ";
        }
        
        for (int j=row-i;j>=1;j--)
        {
            cout<<" ";
        }
        
        for (int j=0;j<i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    
    return 0;
}
