#include <bits/stdc++.h>
using namespace std;


#define max 1000001
#define pi 3.142857
typedef unsigned long long ll;

int main()
{
    srand(time(NULL));
    int m,i,k;
    cin>>m;
    float matd[m],dct[m];
    float ci,dct1,sum;
    for(i=0;i<m;i++)
    {
        matd[i]=(rand()%256)-128;
    }

    for(i=0;i<m;i++)
    {
        cout<<matd<<" ";
    }

    for(i=0;i<m;i++) 
    {
		if(i==0)
			ci=1/sqrt(m);
		else
			ci=sqrt(2)/sqrt(m);
		sum=0;
		for(k=0;k<m;k++)
        {
			dct1 =  matd[k] * cos((2*k+1)*i*pi/(2*m));
			sum = sum+dct1;
		}
		dct[i]=ci* sum;
	}

    cout<<endl;
    cout<<endl;
    for(i=0;i<m;i++)
    {
        cout<<dct[i]<<" ";
    }
    return 0;

}