#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n;
	string a;
	cin>>n;
	cin>>a;//����ĸ�� 
	while(n--)
	{
		string b;
		int t,sum=0;
		cin>>b;
		for(int i=0;i<=a.length()-1;i++)//�ظ�����ĸ�� 
		{
			t=i;//��ǳ�ʼλ�ã���ֹ������ͬ�����Ӵ� 
			for(int j=0;;) 
			{
				if(j==b.length())//�ж�Ϊ�Ӵ������� 
				{
					sum++;
					break;
				}
				if(a[i]==b[j])//�ж�ÿһ���Ƿ���ͬ����ͬ��ʼ�ж���һ�� 
				{
					i++;j++;
				}
				else
				{
					break;//���в�ͬ����ֹ 
				}
			}
			i=t;//�ع��ʼλ�ã�������һ��ѭ�� 
		}
		printf("%d",sum);
		if(n)
		{
			printf("\n");
		}
	}
}
