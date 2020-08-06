#include <bits/stdc++.h>
using namespace std;

int findGCD (int a, int b) {
    int c;
    do {
        c = a % b;
        if (c > 0) {
            a = b;
            b = c;
        }
    } while (c != 0);
    return b;
}

int main()
{
  int t ,i , j ,k ,m;
  cin >> t ;
  for(i=0;i<t;i++)
  {
    int l , r ,flag=0;
    cin >> l >> r ;

    if(l*2 <= r)
    {
      cout << l <<" " << l*2 << endl ;
    }
    else{
      cout << "-1" << " " << "-1" <<  endl ;
    }
  }
  return 0 ;
}
