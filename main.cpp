#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{ freopen("input.txt","r",stdin);
  int ar[1000];
   int n;

  while(scanf("%d",&n)==1)
  {
    for(int i=0; i<n; i++)
        cin>>ar[i];
      int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ar[i]>ar[j])
            {
                count++;
              //  swap(ar[j],ar[j+1]);
            }
        }
    }
    cout<< "Minimum exchange operations : "<<count<<endl;

  }

    return 0;
}
