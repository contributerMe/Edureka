
#include<bits/stdc++.h>
using namespace std;
    int bsRecursive(vector<int> v,int low,int high,int target){
        int mid = (low+high) / 2 ;
        if(low>high){
            return -1;
        }
        if(v[mid] == target){
            return mid;
        }else if(v[mid] > target){
            return bsRecursive(v,low,mid,target);
        }else{
            return bsRecursive(v,mid+1,high,target);
        }
        
    }
    int bsIterative(vector<int> v ,int target){
            int low = 0, high = v.size() - 1 ;
            while(low<=high){
                int mid = (low+high)/2;
                if(v[mid]==target){
                    return mid;
                }else if(v[mid]>target){
                    high = mid ;
                }else{
                    low = mid + 1 ;
                }
            } return -1 ;
    }
int main()
{
    vector<int>v = {1,3,5,6,8,10};
    
    cout<<bsRecursive(v,0,v.size(),81);

    return 0;
}