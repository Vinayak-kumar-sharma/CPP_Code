#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& nums, int s,int e){
    while(s<e){
        swap(nums[s],nums[e]);
        s++;
        e--;
    }
}

void nextPermutation(vector<int>& nums){
    int n = nums.size();
    int i =n-2;
    while(i>=0 && nums[i]>=nums[i+1]){
        i--;
    }
    if(i>=0){
        int j = n-1;
        while(j>=0 && nums[j]<=nums[i]){
            j--;
        }
        swap(nums[i],nums[j]);
    }
    reverse(nums,i+1,n-1);
}

int main(){
vector<int> nums = {2,4,1,7,5,0};
nextPermutation(nums);
cout<<"[ ";
for(int i =0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
cout<<"]";
return 0;
}