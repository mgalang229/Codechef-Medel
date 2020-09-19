#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i)
			cin >> a[i];
		int min=*min_element(a, a+n); 
		int max=*max_element(a, a+n);
		for(int i=0; i<n; ++i)
			if(a[i]==min||a[i]==max)
				cout << a[i] << " ";
		cout << "\n";
	}
}
