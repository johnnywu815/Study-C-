#include <iostream>
using namespace std;
int main()
{
	int i;
	int j;
	int k;
	k=0;
	for(i=2;i<=100;i++)
	{	
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==0)
		cout<<"ÖÊÊý£º"<<i<<endl;
		k=0;
	}
	return 0;
}

