#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
int chu1[100005];//ǰ��������ÿ�����ֳ��ֵĴ���
int chu2[100005];//���������ÿ�����ֳ��ֵĴ���
int ans=0;//��¼�� 
int ans1=0;//��¼ǰ�������Ȩֵ 
int ans2=0;//��¼��������Ȩֵ 
int main()
{
	cin>>n;
	//ö����������ķֽ�㣬��ʼʱ�ֽ��Ϊ 1 
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i>=2)
		{
			if(chu2[a[i]]==0)//���γ��������� 
			{
				ans2++;
			}
			chu2[a[i]]++;
		}
	}
	ans1=1;
	chu1[a[1]]++;
	for(int i=2;i<=n;i++)//ö�ٷֽ�� ������ÿ�α䶯 ��ǰ��ζ�ֽ���ϵ����������ٷֽ���ϵ��� 
	{
		if(chu1[a[i]]==0)//a[i]��ǰ���û���ֹ� 
		{
			ans1++;
			chu1[a[i]]++;
		}
		else//a[i]��ǰ��γ��ֹ� 
		{
			chu1[a[i]]++;
		}
		if(chu2[a[i]]>1)//������a[i]��ֹһ��
		{
			chu2[a[i]]--;
		}
		else if(chu2[a[i]]==1)//����a[i]ֻʣһ��
		{
			ans2--;
			chu2[a[i]]--;
		}
		if(ans1+ans2>=ans)ans=ans1+ans2;
	}
	cout<<ans;
	return 0;
}
