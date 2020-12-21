#include<iostream>
using namespace std;
bool checkPalindrome(char str[]) {
    // Write your code here
    
  int count=0,i=0;
    while(str[i]!=0)
    {
        count++;
        i++;
    }
    int j=0;
    for(i=count-1;i>=0;i--)
    {
        if(str[i]==str[count-i-1])
           {
               j++;
               continue;
           }
           else{
               return false;
           }
    }
if(j==count)
           {
               return true;
           }}
int main()
{
	char str[45];
	cin>>str;
	cout<<checkPalindrome(str)<<endl;
}
