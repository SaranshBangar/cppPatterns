// Sample Output

// Enter no. of rows and columns : 5
// Enter first character : a
// a b c d e 
// a b c d e 
// a b c d e 
// a b c d e
// a b c d e


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
    char original=c;

    for (int i=1;i<=rowcol;i++)
    {
        for (int j=1;j<=rowcol;j++)
        {
            cout<<c<<" ";
            c++;
        }
        c=original;
        cout<<endl;
    }
    return 0;
}
