#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int uji;

    for(int i=0; i<n; i++)
    {
        cin>>uji;
        int maksimum[uji];
        int minimum[uji];
        int bangun[3][uji];
        int max_sum = 0;
        int min_sum = 0;

        for(int j=0; j<uji; j++)
        {
            for(int k=0; k<3; k++)
            {
                cin>>bangun[j][k];
            }

            maksimum[j] = *max_element(bangun[j],bangun[j]+3);
            minimum[j] = *min_element(bangun[j],bangun[j]+3);

        }

        for(int j=0; j<uji; j++)
        {
            max_sum = max_sum + maksimum[j];
            min_sum = min_sum + minimum[j];
        }

        cout<<min_sum<<" "<<max_sum<<endl;

    }

    return 0;
}