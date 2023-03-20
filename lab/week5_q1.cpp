#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> v;
    int n=0;
    int max=0;
    char max_ch;
    cout<<"enter number of alphabets"<<endl;
    cin>>n;
    cout<<"enter alphabets"<<endl;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        v.push_back(ch);
    }
    for(int i=0;i<v.size()-1;i++)
    {
        char flag=v[i];
        int c=0;
        for(int j=i+1;j<v.size();j++)
        {
            if(flag==v[j])
                c++;
        }
        if(max<c)   
        {
            max=c+1;
            max_ch=flag;
        }
    }
    cout<<max_ch<<"-"<<max;
    return 0;
}
