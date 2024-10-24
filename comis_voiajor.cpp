#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int st[100],n,nr,a[10][10];

void afisare(int k)
{
    cout<<" Solutia "<<nr<<" :";
    for(int i=1;i<k;i++)
       cout<<st[i]<<" ";
    cout<<endl;
}
int valid(int k)
{
    if(k>1)
    {
    for(int i=1;i<k;i++)
        if(st[k]==st[i])return 0;
    if(a[st[k-1]][st[k]]==0)return 0;
    if(k==n)if(a[st[1]][st[k]]==0)return 0;
    }

    return 1;
}

void backtrack(int k)
{
    int i;
    if(k==n){nr++;afisare(k);}
    else
        {
            st[k]= 1;
            while(st[k]<n)
            {
                st[k]++;
                if(valid(k))backtrack(k+1);
            }
        }

}

int main()
{
    cout<<"Oras de plecare: ";
    cin>>st[1];
    ifstream f("orase.in");
    n=6;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        f>>a[i][j];
    backtrack(2);
    cout<<nr<< " solutii";

return 0;
}
