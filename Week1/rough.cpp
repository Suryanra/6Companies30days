#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> d1(n);
    vector<int> d2(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        for (int i = 0; i < n; i++){
            bool flag=false;
            for(int j=2;j<=sqrt(a[i]);j++){
                  if(a[i]%j==0){
                        flag=true;
                        int powerCount=0;
                        while(a[i]%j==0){
                              powerCount++;
                              a[i]=a[i]/j;
                        }
                        d1[i]=pow(j,powerCount);
                        d2[i]=a[i];
                  }
            }
            if(flag==false){
                  d1[i]=-1;d2[i] =-1;
            }
        }

        for(int i = 0; i < n; i++)  cout << d1[i] << " \n"[i==n-1];
        for(int i = 0; i < n; i++)  cout << d2[i] << " \n"[i==n-1];
        
    
    return 0;
}