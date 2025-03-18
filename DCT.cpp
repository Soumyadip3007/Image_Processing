#include<bits/stdc++.h>
using namespace std;

#define pi 3.1415
const int m=8,n=8;
void DCT(int matrix[m][n])
{
    float dct[m][n];
    float ci,cj,dct1,sum;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<m;k++)
            {
                for(int l=0;l<n;l++)
                {
                    ci=(i==0)?1/sqrt(m):sqrt(2)/sqrt(m);
                    cj=(j==0)?1/sqrt(n):sqrt(2)/sqrt(n);
                    dct1=matrix[k][l]*cos((2*k+1)*i*pi/(2*m))*cos((2*l+1)*j*pi/(2*n));
                    sum+=dct1;
                }
            }
            dct[i][j]=ci*cj*sum;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dct[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int matrix[m][n] = { { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 },
                         { 255, 255, 255, 255, 255, 255, 255, 255 } };
    DCT(matrix);
    return 0;
}