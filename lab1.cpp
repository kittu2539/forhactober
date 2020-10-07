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
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
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
	ll int n, k, m, i, j;
	//write ur code here
	cin>>n>>k;
	if(n<k)
	{
		cout<<abs(n-k)<<"\n";
	}
	else
	{
		if(n%2==0&&k%2==0)
		{
			cout<<0<<"\n";
		}
		if else(n%2!=0&&k%2!=0)
		{
			cout<<0<<"\n";
		}
		else
		{
			cout<<1<<"\n";
		}
	}
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
