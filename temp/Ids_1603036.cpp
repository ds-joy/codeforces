#include<bits/stdc++.h>
using namespace std;
int main()
{
    // This is for file input and output from here
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //Input will be taken from input.txt
    //Output will be in output.txt
    


    int Vt = .3; //Threshold voltage
    float k = 27; //Constant term

    int Vgs, Vds;
    float Ids;

    
    for(int i=1; i<15; i++)
    {
        cout << "please Enter Vgs: ";
        cin >> Vgs;

        cout << "For Vgs = " << Vgs << endl;

        for(Vds=1; Vds<=30; Vds++)
        {
            if (Vds < Vgs - Vt)
            {
                Ids = k * ( (Vgs-Vt)*Vds - (Vds*Vds)/2);
            }
            else
            {
                Ids = 0.5 * k * (Vgs - Vt) * (Vgs - Vt);
            }

            cout << Ids << endl; 
        }

        
    }

    return 0;
}
