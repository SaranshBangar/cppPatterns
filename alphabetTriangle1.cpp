// Sample Output

// Enter no. of rows : 5
// Enter first character : a
// a 
// b b 
// c c c 
// d d d d 
// e e e e e

#include <iostream>
using namespace std;

int main()
{
    int row;
    char c;

    cout<<"Enter no. of rows : ";
    cin>>row;

    cout<<"Enter first character : ";
    cin>>c;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
    return 0;
}