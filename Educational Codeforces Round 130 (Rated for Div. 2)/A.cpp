#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
void solve(){
	int n , m;
	cin >> n >> m;
	int a[n];
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int sum = 0;
	for(int i = 0;i<n;i++){
		sum += a[i];
	}
	if(m>sum){
		cout << 0 << endl;
	}
	else{
		cout << sum - m << endl;
	}

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