#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		
		string s;
		cin >> s;
		int sum = 0;
		int sum1 = 0;
		for(int i = 0;i<s.size()/2;i++){
			sum += s[i] - '0';
		}
		for(int j = s.size()-1;j>=s.size()/2;j--){
				sum1 += s[j] - '0';
			}
			if(sum == sum1){
				cout << "YES" << endl;
				
			}
			else{
				cout << "NO" << endl;
			}
		}

		

	}



		



	



	



			


		
		

		







	







    


	
	
	

	


 
