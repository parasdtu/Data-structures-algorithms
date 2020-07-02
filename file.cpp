#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define llu long long unsigned
#define INF INT_MAX
#define SINF 1e18
#define pb push_back
#define mod 1000000007
#define PI 3.1415926535897932384626433832795

bool helper(ll v,ll c,ll n,ll m){
	if((v+c)<(n+m)){return false;}
	else{
		ll smallCookieCount=min(v,c);
		if(smallCookieCount>=m){return true;}
		else{return false;}
	}
	return false;
}

int main(){
	//////////////
		#ifndef ONLINE_JUDGE
		freopen("inputf.in","r",stdin);
		freopen("outputf.in","w",stdout);
		#endif
	/////////////
	int t;
	cin>>t;
	while(t--){
		ll v,c,n,m;cin>>v>>c>>n>>m;
		// vector<int> v(n,0);
		// for(int i=0;i<n;i++){
		// 	int temp;cin>>temp;
		// 	v[i]=temp;
		// }		
		if(helper(v,c,n,m))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}

	return 0;
}
// Yes
// No
// No
// Yes
// No
// Yes
