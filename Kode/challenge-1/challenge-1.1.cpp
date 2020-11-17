#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(auto i=0; i<n; i++)
    {
        string teks;
        cin>>teks;

        for(auto j=0; j<teks.length(); j++)
        {
            // Traversal
            if(teks[j] == '>'){
                teks[j+1] = toupper(teks[j+1]);
                teks.erase(j,1);
                j--;
            }
            
            else if(teks[j] == '<'){
                teks[j+1] = tolower(teks[j+1]);
                teks.erase(j,1);
                j--;
            }
             
        }

        cout<<teks<<"\n";
        
    }

    return 0;
}
