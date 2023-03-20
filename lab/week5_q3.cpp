#include<iostream>
#include<vector>
using namespace std;

vector<int> count_same(int a[],int b[],int l1,int l2){
    int maxlen=max(l1,l2);
    vector<int> ans;
    for(int i=0;i<maxlen;i++){
        for(int j=0;j<maxlen;j++){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
            }
        }
    }
    return ans;
}
int main(){
    int s1,s2;
    cout<<"enter the size of the first array"<<endl;
    cin>>s1;
    int arr1[s1];
    cout<<"enter the elements of the forst array"<<endl;
    for(int i=0;i<s1;i++){
        cin>>arr1[i];
    }
    cout<<"enter the size of the secodn array"<<endl;
    cin>>s2;
    int arr2[s2];
    cout<<"enter the elements of the swecond array"<<endl;
    for(int i=0;i<s2;i++){
        cin>>arr2[i];
    }
    vector<int> ret=count_same(arr1,arr2,s1,s2);
    int len=ret.size();
    for(int i=0;i<len;i++){
        cout<<ret[i]<<endl;
    }

}