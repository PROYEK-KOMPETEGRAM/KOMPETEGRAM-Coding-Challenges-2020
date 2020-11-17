#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string temp[n];

    for(auto i=0; i<n; i++)
    {
        string nama;

        cin>>nama;

        for(auto j=0; j<nama.length(); j++)
        {
            // Traversal
            if(nama[j] == '>'){
                nama[j+1] = toupper(nama[j+1]);
                nama.erase(j,1);
                j--;
            }
            
            else if(nama[j] == '<'){
                nama[j+1] = tolower(nama[j+1]);
                nama.erase(j,1);
                j--;
            }
             
        }

        cout<<nama<<"\n";
        
    }

    return 0;
}
