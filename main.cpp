#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int i, n, j, t, v;
    string s;
    bool scambio;
    cout << "quante macchine hanno gareggiato?" << endl;
    cin >> n;
    vector<int>r(n);
    vector<string>nomi(n);
    i=0;
    while (i<n)
    {
        cout << "come si chiama la macchina?" << endl;
        cin >> nomi[i];
        v = rand()%(n+1);
        r[i]=v;
        j=0;
        while (j<1)
        {
            if(v=r[i])
            {
                v=v+1;
                if (v>n)
                {
                    v=1;
                }
                j=0;
            }
            else
            {
                j=j+1;
            }
        }
        r[i] =v;
        i=i+1;
    }
    i=0;
    scambio = true;
    while (i<n and scambio)
    {
        j=0;
        scambio= false;
        while (j<=n-2-i)
        {
            if (r[j]>r[j+1])
            {
                t=r[j];
                r[j]= r[j+1];
                r[j+1] = t;
                s=nomi[j];
                nomi[j]=nomi[j+1];
                nomi[j+1] =s;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    j=0;
    while(j<n)
    {
        cout << "l'auto " << nomi[j] << " è arrivata nella posizione numero " << r[j] << endl;
        j=j+1;
    }
}
