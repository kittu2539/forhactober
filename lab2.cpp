#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>             vi;
typedef vector<ll>              vl;
typedef vector<pii>             vpii;
typedef vector<pl>              vpl;
typedef vector<vi>              vvi;
typedef vector<vl>              vvl;

const int mod = 1'000'000'009;

//============================

void solve(){
	int n, m, i, j;
	//write ur code here
	cin>>n;
	string s;
	map<char, int>m1;
	fo(i,n){
		cin>>s;
		fo(j,s.length()){
			m1[s[j]]++;
		}
	}
	bool ans=1;
	tr(it, m1)
	{
		if(it->second%n==0)
		{
		}
		else
		{
			ans=0;
		}
	}
	if(ans)cout<<"\nyes";
		else cout<<"\nno";
}

int main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen ("input1.txt", "r", stdin);
	freopen ("output1.txt", "w", stdout);
#endif
	
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
}
