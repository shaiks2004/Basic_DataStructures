#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

    vector<vector<int>> A = { {1, 1, 1},
                              {2, 2, 2},
                              {3, 3, 3},
                              {4, 4, 4} };

    vector<vector<int>> B = { {1, 1, 1},
                              {2, 2, 2},
                              {3, 3, 3},
                              {4, 4, 4} };


    int n1=A.size();
    int n2=B.size();
    int m1=A[0].size();
    int m2=A[0].size();
    vector<vector<int>> result;

    for(int i=0;i<n1;i++){
        int sum=0;
        for(int j=0;j<m1;j++){
            A[i][j]=A[i][j]*B[i][j];
        }

    }

    for(int i=0;i<A.size();i++){

        for(int j=0;j<A[0].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}