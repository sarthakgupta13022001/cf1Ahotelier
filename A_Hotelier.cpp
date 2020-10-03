# include <iostream>
#include<string>
#include<sstream>
# include <vector>
using namespace std;
int main(){
    vector<long int>arr;
    long int n, k=0, l;
    cin>>n;
    l=n-1;
    for(long int i=0; i<10; i++){
        arr.push_back(0);
    }
    string str;
    cin>>str;
    for(int i=0; i<n; i++){
        if(str[i]=='L'){
            for(int j=0; j<10; j++){
                if(arr[j]==0){
                    arr[j]=1;
                    break;
                }
            }
        }
        else if(str[i]=='R'){
            for(int j=9; j>=0; j--){
                if(arr[j]==0){
                    arr[j]=1;
                    break;
                }
            }
        }
        else{
            stringstream st;
            st<<str[i];
            int x;
            st>>x;
            arr[x]=0;
        }
    }
    for(int i=0; i<10; i++){
        cout<<arr[i];
    }
    return 0;
}