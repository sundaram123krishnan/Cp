#include "bits/stdc++.h"
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		int m;
		cin >> m;
		int b[m];
		for(int i = 0;i<m;i++){
			cin >> b[i];
		}
		int max = a[0];
		for(int i = 0;i<n;i++){
			if(a[i]>max){
				max = a[i];
			}
		}
		int max1 = b[0];
		for(int i = 0;i<m;i++){
			if(b[i]>max1){
				max1 = b[i];
			}
		}
		if(max>max1){
			cout << "Alice" << endl;
			cout << "Alice" << endl;
		}
		else if(max1>max){
			cout << "Bob" << endl;
			cout << "Bob" << endl;
		}
		else{
			cout << "Alice" << endl;
			cout << "Bob" << endl;
		}
	}


	

	


}