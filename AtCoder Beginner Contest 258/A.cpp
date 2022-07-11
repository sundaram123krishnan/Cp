#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int N = 0;
void solve(){
  int n;
  cin >> n;
  int c ;
  if(n<60)
  c = 2100 + n;
  else
  c = 2100 + (n+60-20); 
  string s = to_string(c);
  cout << s[0] << s[1] << ":" << s[2] << s[3] << endl;
 
}
 
 
 
 
 
signed main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  solve();
 
 
 
 
 
}
 
 