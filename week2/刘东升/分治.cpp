#include<bits/stdc++.h>
using namespace std;
const int M=10001;
typedef struct{
	int a;
	int b;
}City;
City city[M];//����һ���������ӳ��еĽṹ�� 
int judge[M];//����һ���жϴݻٳ��е����� 
int main()
{
	int n,m,i;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>city[i].a>>city[i].b;//�������ӳ��еĵ�· 
	}
	int N,CityNumber,target;
	cin>>N;
	while(N--)
	{
		cin>>CityNumber;
		bool flag=true;//�����ж��Ƿ��ܳɹ� 
		memset(judge,0,sizeof(judge));//������һ�εĴݻ�Ӱ����� 
		for(i=0;i<CityNumber;i++)
		{
			cin>>target;
			judge[target]=1; //���ݻٵĳ��б��Ϊ1��δ�ݻ���������Ϊ0 
		}
		for(i=0;i<m;i++)
		{
			if(!judge[city[i].a]&&!judge[city[i].b])//�ж����ӵ����������Ƿ���ڣ����������������ʧ�� 
			{
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
