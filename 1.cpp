#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {
    int page=1;
    int c=0;
    for(int i=0;i<arr.size();i++){
        int start=1;
        int prev=arr[i];
        while(arr[i]>0){
            // if(arr[i]>=page){
            //     c++;
            // }
             
            for(int j=start;j<start+k;j++){
                if(j>prev){
                    break;
                }
                if(j==page){
                   // cout<<i<<" "<<page<<" "<<j<<endl;
                    c++;
                }
                if(page==8){
                    cout<<j;
                }
               
            }
            start=start+k;
            arr[i]-=k;
            page++;
            // cout<<page;
        }
    }   
    return c;

}

