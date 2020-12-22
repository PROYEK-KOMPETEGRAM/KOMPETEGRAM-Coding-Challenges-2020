#include <iostream>

using namespace std;

int main()
{
    int kolom;
    int baris;
    int spasi;
    int n;
    int jembatan = 0;

    cin>>n;
    
    if(n < 6)
    {
        while(jembatan < 2)
        {
        cout<<"******************";
        for(int i=1; i<n; i++)
        {
            cout<<"************";
        }
        cout<<endl;

        jembatan++;
        }
    }
    else
    {
        while(jembatan < 3)
        {
        cout<<"******************";
        for(int i=1; i<n; i++)
        {
            cout<<"************";
        }
        cout<<endl;

        jembatan++;
        }
    }

    for(int baris = 1; baris<=n; baris++)
    {
        for(spasi = 0; spasi <= n-baris; spasi++)
            cout<<" ";
        for(kolom = 1; kolom < baris; kolom++)
            cout<<"*";

        for(kolom = n; kolom >= baris; kolom--)
            cout<<"*";
        for(spasi = 0; spasi < baris; spasi++)
            cout<<" ";

        for(spasi = 0; spasi < baris; spasi++)
            cout<<" ";
        for(kolom = n; kolom >= baris; kolom--)
            cout<<"*";

        for(kolom = 1; kolom < baris; kolom++)
            cout<<"*";
        for(spasi = 0; spasi < n-baris+1; spasi++)
            cout<<" ";

        for(spasi = 0; spasi <= n-baris; spasi++)
            cout<<" ";
        for(kolom = 1; kolom < baris; kolom++)
            cout<<"*";

        for(kolom = n; kolom >= baris; kolom--)
            cout<<"*";
        for(spasi = 0; spasi < baris; spasi++)
            cout<<" ";

        for(spasi = 0; spasi < baris; spasi++)
            cout<<" ";
        for(kolom = n; kolom >= baris; kolom--)
            cout<<"*";

        for(kolom = 1; kolom < baris; kolom++)
            cout<<"*";
        for(spasi = 0; spasi < n-baris+1; spasi++)
            cout<<" ";

        for(spasi = 0; spasi <= n-baris; spasi++)
            cout<<" ";
        for(kolom = 1; kolom < baris; kolom++)
            cout<<"*";

        for(kolom = n; kolom >= baris; kolom--)
            cout<<"*";
        for(spasi = 0; spasi < baris; spasi++)
            cout<<" ";

        for(spasi = 0; spasi < baris; spasi++)
            cout<<" ";
        for(kolom = n; kolom >= baris; kolom--)
            cout<<"*";

        for(kolom = 1; kolom < baris; kolom++)
            cout<<"*";
        for(spasi = 0; spasi < n-baris+1; spasi++)
            cout<<" ";

        cout<<endl;

    }


}