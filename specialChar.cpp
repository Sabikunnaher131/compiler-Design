#include<iostream>
using namespace std;
int main()
{
  int i,ct = 0,j=0;
  char a[10000],b[10000];
  cin.getline(a,10000,'1');
  for(i=0;i<a[i];i++)
  {
      if(a[i]>='a'&& a[i]<='z'|| a[i]>='A' && a[i]<='Z' || a[i]>='0' && a[i]<='9'|| a[i]== '\n')
      {
         b[j++] = a[i];

        }

  }
    b[j] = '\0';

    cout<< b <<endl;
    return 0;
      }



