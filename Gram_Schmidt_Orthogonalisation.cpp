#include<bits/sydc++.h>
using namespace std;

int main()
{
    int m,n,i,j,k,l;
    float b1,b2;
    float num,denum,coef;
    cin>>m>>n;
    float mat[m][n],mat1[m][n],transform[m][n];
    srand(time(NULL));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mat[j][i];
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }

    cout<<endl;

    for(i=0;i<m;i++)
    {
        mat1[i][0]=mat[i][0];
    }

    for(j=0;j<n;j++) {
		for(k=0;k<j;k++) {
			num=0;denum=0;
			for(l=0;l<m;l++){
				num=num+mat[l][j]*mat1[l][k];
				denum=denum+mat1[l][k]*mat1[l][k];
			}
			coef=num/denum;
			if(denum==0){
				coef=0;
			}
			for(l=0;l<m;l++){
				mat1[l][j]=mat[l][j]-coef*mat1[l][k];
			}
			for(l=0;l<m;l++){
				mat[l][j]=mat1[l][j];
			}
		}
		b1=0;
		for(i=0;i<m;i++) {
			b1=b1+((mat1[i][j])*(mat1[i][j]));
		}
		b2=sqrt(b1);					// Variable b2 contains distance of vectors
		
		for(i=0;i<m;i++) {
			if(b2==0) {
				
				transform[i][j]=0;
			}
			else {
				transform[i][j]=(mat1[i][j])/b2;
			}
		}
	}

    cout<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<transform[i][j];
        }
        cout<<endl;
    }
}