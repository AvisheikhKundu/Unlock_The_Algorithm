#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p;
    cin>>t>>p;
    int a=p-t;
    int arr[]={32,16,8,4,2,1};

    vector<int>v;
    for (int i=0;i<6;i++){

        if (a>=arr[i]){
            if (a==0){
                break;
            }
            v.push_back(arr[i]);
            a-=arr[i];

        }

    }
    int flag=0;

    for (int i=0;i<v.size();i++){
        if (v[i]==2){
            flag=1;
            break;
        }

    }
    if (flag==0){
        cout<<"No"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
    }
    


    return 0;
}