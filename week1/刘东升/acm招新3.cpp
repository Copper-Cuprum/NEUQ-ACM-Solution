#include<bits/stdc++.h> 
using namespace std;
int main()
{
	float r,d,n,ans;
	cin>>r>>d>>n;
	r=fabs(r);
	d=fabs(d);
	n=fabs(n);
	if(n-r<=0)//�������Բ������ֱ���ཻ 
	{
		ans=2*d-r;
	}
	else
	{
		ans=2*sqrt(d*d+(n-r)*(n-r))-r;//���ཻ��� 
	}
	printf("%.2f",ans);
	return 0;
}
