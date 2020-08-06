#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int t ,i ;
  cin >> t ;
  while(t--)
  {
    int n ,flag =0;
    cin >> n ;
    int a[n] ;
    for(i=0;i<n;i++)
    {
      cin >> a[i] ;
    }
    sort(a,a+n) ;
    for(i=0;i<n-1;i++)
    {
      if((a[i+1] - a[i]) > 1)
      {
        flag = 1 ;
        break ;
      }
    }
    if(flag==1)
    {
      cout << "NO" << endl;
    }
    else if(flag==0)
    {
      cout <<"YES"<<endl;
    }
  }
return 0 ;
}
