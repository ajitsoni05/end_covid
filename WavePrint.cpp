void wavePrint(int **a, int n, int m)
{
    //Write your code here
    int i=0,j=0;
    while(j<=m-1)
    {
        if(i==0)
        { 
           for(int k=0;k<n;k++)
           {
               cout<<a[k][j]<<" ";
               
           }
            i=n-1;
        }
        if(i==n-1&&j==m-1)
        {
            break;
        }
              j++;
        if(i==n-1)
        { int count=n-1;
            for(int k=n-1;k>=0;k--)
           {
               cout<<a[k][j]<<" ";
              
           }
            i=0;
            
        }
        j++;
  
    }
}
