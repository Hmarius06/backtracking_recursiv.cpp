#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int st[100],n,nr,a[10];

void afisare(int k)
{
    cout<<" Solutia "<<nr<<" :";
    for(int i=1;i<k;i++)
       if(st[i]) cout<<i<<" ";
    cout<<endl;
}

void backtrack(int k)
{
    int i;
    if(k==n+1){nr++;afisare(k);}
    else
        {
            st[k]= -1;
            while(st[k]<1)
            {
                st[k]++;
                backtrack(k+1);
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
