#include <iostream>
#include <unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int> nums)
{
    int countMajority = nums.size() / 2;
    unordered_map<int, int> map;
    int res=0;
    for (auto num : nums)
    {
        map[num]++;
    }
    for (auto num : map)
    {
        if (num.second > countMajority)
        {
            res=num.first;
        }
    }
    
    return res;
}


int median(vector<int> nums){
    int len=nums.size();
    sort(nums.begin(),nums.end());
    int sum=0;
    int med=0;
    if(len%2==0){
        int ln=len/2;
        sum=nums[ln]+nums[ln+1];
        med=sum/2;
    }
    else if(len%2!=0){
        int le=len/2;
        med=nums[le];
    }
    int rs=med;
    return rs;
}



int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    vector<int> arr;
    int c;
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>c;
        arr.push_back(c);
    }
    cout<<"\nmedian of the provided array is: "<<endl;
    int s=median(arr);
    cout<<s;
    int v=majority(arr);
    if(v==0){
        cout<<"\nno majority element in the array"<<endl;
    }
    else if(v!=0){
    cout<<"\nmajority element in the provided array"<<endl;
    cout<<v;
    }
}