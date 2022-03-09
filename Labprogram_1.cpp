#include<iostream>

using namespace std;

int main(){

    int a[10][10], m,n, i,j;

    cout<<"Enter thr number of rows";

    cin>>m;
    cout<<"Enter the number of columns";
    cin>>n;
    cout<<"Enter the values of matrix";

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
         {
             cin>>a[i][j];
             
            }
    }
    cout<<"the given matrx is"<<endl;
        for (i=0;i<m;i++)
{
    for (j=0;j<n;j++)
    {
        cout<<a[i][j];

    }
    cout<<endl;
}
}
