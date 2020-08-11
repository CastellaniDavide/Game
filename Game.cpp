#include <bits/stdc++.h>
using namespace std;

int T, N, temp;
bool vinto;

int main()
{
 freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);

    cin >> T >> N;
    for(int i=0; i<N; i++)
    {

        if(T==1)
        {
            vinto=false;
        }
        else
        {
            vinto=true;
        }
        cin >> temp;
        //cout << "temp= " << temp << endl;
        while(temp/2!=1 && temp!=3)
        {
            temp/=2;
            vinto= !vinto;
            //cout << "temp= " << temp << endl;
        }
        if(temp==3)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << vinto <<endl;
        }
    }


    return 0;
}
