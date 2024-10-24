#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int st[100],n,nr,a[10],su;

void afisare(int k)
{
    cout<<" Solutia "<<nr<<" :";
    for(int i=1;i<k;i++)
       cout<<st[i]<<" ";
    cout<<endl;
}

void backtrack(int k)
{
    int i;
    if(su==n){nr++;afisare(k);}
    else
        {
            st[k]= 0;
            while(st[k]+su<n)
            {
                st[k]++;su+=st[k];
                backtrack(k+1);
                su-=st[k];
            }
        }

}

int main()
{

    cout<<"n=";cin>>n;
    backtrack(1);
    cout<<nr<< " solutii";

return 0;
}
