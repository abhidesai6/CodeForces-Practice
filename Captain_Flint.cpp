#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int t ;
  cin >> t ;
  while(t--)
  {
    long long int n ,i,j ;
    cin >> n ;
    if(n>=31 && n!=40 && n!=36 && n!=44 )
    {
      cout << "YES" << endl;
      cout << "14" <<" "<< "10" <<" "<< "6" <<" " << (n-14-10-6)<<endl ;
    }
    else if (n==40)
    {
      cout << "YES" << endl;
      cout << "15" <<" "<< "14" <<" "<< "6" <<" " << (n-15-14-6)<<endl ;
    }
    else if (n==36)
    {
      cout << "YES" << endl;
      cout << "15" <<" "<< "10" <<" "<< "6" <<" " << (n-15-10-6)<<endl ;
    }
    else if (n==44)
    {
      cout << "YES" << endl;
      cout << "6" <<" "<< "10" <<" "<< "21" <<" " << (n-21-10-6)<<endl ;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0 ;
}
