#include<bits/stdc++.h>

using namespace std;

void lol() {
	int n;
	cin >>n;
	string s;
	cin >> s;
	int k = 0;
	for(int i = 0; i < n; i++) 
		if(s[i] == '-' || s[(i+1)%n] == '-') 
			k++;
	if(s.find('>') == -1 || s.find('<') == -1) k = n;
	cout<<k<<'\n';
}

int main() {
	int n;
	cin >>n;
	while(n--) 
		lol();
}
