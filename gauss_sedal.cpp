#include<bits/stdc++.h>
using namespace std;
int main()
{
	float a1,b1,c1,d1;
	float a2,b2,c2,d2;
	float a3,b3,c3,d3;
	int i=1;
	float x=0;
	float y=0;
	float z=0;
	cin>>a1>>b1>>c1>>d1;
	cin>>a2>>b2>>c2>>d2;
	cin>>a3>>b3>>c3>>d3;
	while(i<10)
		{
			
			cout<<i<<"th iteration \n";
			
			x=(d1-(b1*y)-(c1*z))/a1;
			y=(d2-(a2*x)-(c2*z))/b2;
			z=(d3-(a3*x)-(b3*y))/c3;
			cout<<"values of x,y,z = "<<x<<" "<<y<<" "<<z<<endl;
			i++;
		}
	return 0;
}
