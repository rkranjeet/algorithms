#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

	
	queue<ll> Q;
	Q.push(1);
	Q.push(2);
	Q.push(3);
	Q.push(4);
	cout<<Q.size()<<"\n";
	cout<<Q.front()<<"\n";
	Q.pop();
	cout<<Q.front()<<"\n";
	Q.empty();						//	Queue is empty or not

	
	// for(auto i=Q.front();i!=Q.back();i++){
	// 	cout<<i<<"\t";
	// }

	
	
	return 0;
}