#include <iostream>
#include <cmath>
using namespace std;

int st[100], n, k,nr;

void afisare(int k)
{
    cout<<"\nSolutia "<<nr<<":"<<endl;
    for(int i=1;i<=n;i++)
    {
        for (int j=1; j<=k; j++)
            if (st[i]==j) cout<<"D";
                else cout<<"*";
        cout<< endl;
    }

}

int valid(int k)
{
    for(int i=1;i<k;i++)
                  if(abs(st[k]-st[i])==abs(k-i) || st[k]==st[i]) return 0;

}

void bt(int k)
{
    int i;
    if(k==n+1){nr++;afisare(k);}
        else for(i=1;i<=n;i++)
        {
            st[k]=i;
            if(valid(k))bt(k+1);
        }
}

int main()
{
    cout << "Introduceti valoarea: ";
    cin >> n;
    bt(1);
    cout<<"\nSunt "<<nr<<" solutii";
    return 0;
}
