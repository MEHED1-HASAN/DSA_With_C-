#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,st1,st2;
    cout<<"Enter the string:";
    getline(cin,st);
    cout<<"Enter the pattern you want to replace:";
    getline(cin,st1);
    cout<<"Enter the pattern you want to add:";
        getline(cin,st2);
    int ind=st.find(st1);
    if(st2.find(st1) != string::npos)
    {
        cout<<"String 1 is a substring of string 2";

    }
    else
        {

    while(ind!=-1)
    {
        st.replace(ind,st1.length(),st2);
    /* Or you can use the following two statements
    st.erase(ind, st1.length());
    st.insert(ind, st2);*/
        ind=st.find(st1);


    }

    cout<<st;
        }

}
