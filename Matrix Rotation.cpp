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

void matrixRotation()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(((a<b && c<d) || (b<a && d<c)) && ((a<c && b<d) || (c<a && d<b)))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }

}

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    matrixRotation();
    return 0;

}
