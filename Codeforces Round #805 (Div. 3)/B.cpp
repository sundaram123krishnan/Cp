#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int N = 0;
void solve(){
  string s;
  cin >> s;
  int n = s.size();
  set<char> st;
  int count = 1;
  for(int i = 0;i<n;i++){
    st.insert(s[i]);
    if(st.size()>3){
      count++;
      st.clear();
      st.insert(s[i]);
    }
    
  }
  cout << count << endl;
  

}





signed main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
  solve();
}




}



 