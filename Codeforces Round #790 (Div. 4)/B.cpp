#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
void solve(){
	
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	int sum = 0;
	int min = *min_element(a,a+n);
	for(int i = 0;i<n;i++){
		a[i] = a[i] - min;
	}
	for(int i = 0;i<n;i++){
		sum += a[i];
	}
	cout << sum << endl;
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