#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int st[100],n,nr,a[10];

void afisare(int k)
{
    cout<<"(";
    for(int i=1;i<k;i++)
        cout<<st[i]<<" ";
    cout<<")";
    cout<<endl;
}

void backtrack(int k)
{
    int i;
    if(k==n+1){nr++;afisare(k);}
    else
        {
            st[k]=0;
            while(st[k]<a[k])
            {
                st[k]++;
                backtrack(k+1);
            }
        }

}

int main()
{

    cout<<"n=";cin>>n;
    for (int i=1;i<=n;i++)
    { cout<<" Multimea "<<i<<": "; cin>>a[i];}
    backtrack(1);


return 0;
}
