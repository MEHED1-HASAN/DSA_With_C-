#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,pattern;
    cout<<"Enter the string:";
    getline(cin,st);
    cout<<"Enter the pattern you want to delete:";
    getline(cin,pattern);
    int ind=st.find(pattern);
    if(ind==-1)
    {
        cout<<"The pattern is not found in the string";
    }
    else
    {


    while(ind!=-1)
    {
        st.erase(ind,pattern.length());

        ind=st.find(pattern);
    }

    cout<<st;
    }

}

