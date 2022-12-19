/*####################################
#                                    #
# MD MEZBAH UDDIN                    #
# Nantong University(China)          #
# CSE                                #
#                                    #
######################################*/

#include<bits/stdc++.h>

using namespace std;

#define eps le-6
#define LL Long Long

void difference_different()
{
    int t;
    int n,k;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>k>>n;
        int ans=1,cnt=1;
        for(int j=1; j<=k; j++)
        {
            cout<<ans<<" ";
            if(ans+cnt+k-j-1<=n)
            {
                ans+=cnt;
                cnt++;
            }
            else ans++;
        }
        cout<<endl;
    }
}


int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    difference_different();
    return 0;

}
