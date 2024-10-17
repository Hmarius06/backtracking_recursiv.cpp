#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int st[100],n,nr,a[10];
char note[10][10]={" ","do","re","mi","fa","sol","la","si"};

void afisare(int k)
{
    cout<<" Solutia "<<nr<<": ";
    cout<<note[st[1]];
    for(int i=2;i<k;i++)
       cout<<","<<note[st[i]];
    cout<<endl;
}

void backtrack(int k)
{
    int i;
    if(k==n+1){nr++;afisare(k);}
    else
        {
            st[k]=0;
            while(st[k]<7)
            {
                st[k]++;
                backtrack(k+1);
            }
        }

}

int main()
{

    cout<<"n=";cin>>n;
    if(n<6)backtrack(1);
    cout<<nr<< " solutii";

return 0;
}
