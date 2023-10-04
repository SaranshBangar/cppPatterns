// Sample Output

// Enter no. of rows : 5
// Enter no. of columns : 5      
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20
// 21 22 23 24 25

#include <iostream>
using namespace std;

int main()
{
    int row, col, num=1;

    cout<<"Enter no. of rows : ";
    cin>>row;

    cout<<"Enter no. of columns : ";
    cin>>col;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=col;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
