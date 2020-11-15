#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;

    string temp[n];

    for(auto i=0; i<n; i++)
    {
        string nama;

        std::cin >> nama;

        for(auto j=0; j<nama.length(); j++)
        {
            // Traversal
            if(nama[j] == '>'){
                nama[j+1] = toupper(nama[j+1]);
            }
            else if(nama[j] == '<'){
                nama[j+1] = tolower(nama[j+1]);
            }

            // Cari dan hapus
            if((nama[j] == '<') || (nama[j] == '>')){
                nama.erase(j,1);
                j--;
            }
        }

        std::cout << nama<<"\n";
        
    }

    return 0;
}
