#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
 long  int m,n;
    cin>>m>>n;
    long int a[m][n];
    for(long int i=0;i<m;i++)
    {
        for(long int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(long int j=0;j<n;j++)
    { long int sum=0;
     for(long int i=0;i<m;i++)
     {
         sum=sum+a[i][j];
     }
     cout<<sum<<" ";
    }

}



