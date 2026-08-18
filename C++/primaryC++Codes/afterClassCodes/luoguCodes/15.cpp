#include <bits/stdc++.h>
using namespace std;

double quzheng(double a,double b){
    double t;
    
    if(a>=b){
        t = a-b;
    }if(a<b){
        t = b-a;
    }
    
    return t;
}

int main(){
    double a,b;
    cin>>a>>b;
    
    double arr[10000];
    
    for (int i=0;i<b;i++){
        cin>>arr[i];
    }
    
    double c[10000];
    double q = (a+1.0)/2.0;
    double mini = a;
    double maxi = 0;
    double taxi = a;

    for (int i=0;i<b;i++){
        
        c[i] = quzheng(arr[i],q);
        if(mini >= c[i]){
           mini = c[i];
        }
        if(maxi <= arr[i]){
            maxi = arr[i];
        }
        if(taxi >= arr[i]){
            taxi = arr[i];
        }

    }

    int k;//最短时间

    if(mini <= b){
        k = mini;
    }else{
        k = a + 1 - mini;
    }

    int l = 0;//最长时间
    double g = a+1-taxi;
    if(g>=maxi){
        l = g;
    }else{
        l=maxi;
    }
    
    

    cout << k << " " << l <<endl;
    return 0;
}