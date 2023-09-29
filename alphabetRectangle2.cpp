// Sample Output

// Enter no. of rows and columns : 5
// Enter first character : a
// a a a a a 
// b b b b b 
// c c c c c 
// d d d d d 
// e e e e e 

#include <iostream>
using namespace std;

int main()
{
    int rowcol;
    char c;

    cout<<"Enter no. of rows and columns : ";
    cin>>rowcol;

    cout<<"Enter first character : ";
    cin>>c;

    for (int i=1;i<=rowcol;i++)
    {
        for (int j=1;j<=rowcol;j++)
        {
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
    return 0;
}