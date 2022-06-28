#include <bits/stdc++.h>
using namespace std;


#define max 1000001
#define pi 3.142857
typedef unsigned long long ll;
int prime[max];

int main()
{
    srand(time(NULL));
    int d,k=2,p[max/3],res;
    ll c=0;a,p2[2],product,seed,seed1,res1;

    prime[0]=prime[1]=1;

    for(int i=2;i<=max;i++)
    {
        if(!prime[i])
        {
            p[c]=i;
            c++;                //c is a counter keeping track on # prime numbers generated
            for(int j=i+1;j<=max;j+=i)
            {
                prime[j]=1;
            }
        }
    }

    ll p1[c];

    //Array p1 stores all the prime numbers
    for(int i=0;i<c;i++)
    {
        p1[i]=p[i];
    }

    for(int i=0;i<c;i++)
    {
        cout<<p1[i]<<" ";
    }

    while(k)
    {
        a=(rand())%c;
        if((p1[c-a]%4)==3)
        {
            p2[i]=p1[c-a];  //choosing 2 prime numbers using the random array index
            i++;
            k--;
        }
    }

    cout<<endl;

    product=p2[0]*p2[1];
    cout<<product;

    k=1;

    while(k)
    {
        seed1=((rand())%product)+2;
        if((seed1%p2[0]!=0) && (seed1%p2[1]!=0))
        {
            seed=seed1;
            k--;
        }
    }

    cout<<product<<" "<<seed<<endl;

    cin>>d;

    //generating random binary number
    for(int i=1;i<=d;i++)
    {
        res1=(seed*seed)%product;       
        seed=res1;
        res=res1%2;
        cout<<res1<<" ";
        cout<<res<<" ";
    }

    return 0;
}