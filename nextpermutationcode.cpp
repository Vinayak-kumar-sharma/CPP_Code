#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

        //  with in built function ....

int main() {

vector<int> arr = {1,0,0,-1};
next_permutation(arr.begin(),arr.end());
for(int num : arr) {
    cout<<num<<" ";
}
return 0;

}


        //  complete code for the next permutation..

/*void reverse(vector<int>&nums ,int s, int e){
        while (s<e){
            swap (nums[s],nums[e]);
            s++;
            e--;
        }
}
void nextPermu(vector<int>&nums){
        int n = nums.size();
        int i = n-2;
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;

        }
        if(i>=0){
            int j=n-1;
            while(j>=0 && nums[j]<=nums[i]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        reverse(nums,i+1,n-1);
    }
int main()
{
    vector<int> nums={1,0,0,-1};
    int x = nums.size();
    cout<<"Size is:  "<<x<<endl;
    nextPermu(nums);
    for(int i : nums){
        cout<<i<<" ";
    }
    return 0;  
}*/