#include<iostream>
using namespace std;
#define PI 3.1428
class integer
{
	float r,area;
	public:
		void getdata()
		{
			cout<<"enter r value";
			cin>>r;
		}
		void calculate()
		{
		     area=PI*r*r;
			cout<<"\narea of circle="<<area;
		}
};
int main()
{
ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen ("input1.txt", "r", stdin);
	freopen ("output1.txt", "w", stdout);
#endif
	integer p;
	p.getdata();
	p.calculate();
	return 0;
}
