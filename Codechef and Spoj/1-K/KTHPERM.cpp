#include <bits/stdc++.h>


//NOT WORKING


using namespace std;

int b=0;
vector<int> f(int k, vector<int> v)
{
    if(k==b)
    {
        return v;
    }
    else
    {
        b+=1;
        int ff=0;
        for(int i=v.size()-2; i>=0; i--)
        {
            if(v[i]<v[i+1])
            {
                ff=1;
                int mmin=INT_MAX;
                int j;
                for( j=i+1; j<v.size(); j++)
                {
                    if(v[j]>v[i] and v[j]<mmin)
                    {
                        mmin=v[j];
                    }
                }
                swap(v[i],v[j]);
                sort(v.begin()+i+1,v.end());
            }
        }
        if(ff==0)
        {
            sort(v.begin(),v.end());
            v=f(k+1,v);
            return v;
        }
        else
        {
            v=f(k+1,v);
            return v;
        }
    }
    cout<<b<<" "<<k<<endl;
}

string g(int n, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    b=k;
    for(int i=1; i<=n; i++)
    {
        v.push_back(i);
    }
    v=f(0,v);
    string ans="";
    for(int i=0; i<v.size(); i++)
    {
        string s="";
        while(v[i]>0)
        {
            s+='0'+v[i]%10;
            v[i]/=10;
        }
        cout<<i<<" "<<s<<endl;
        reverse(s.begin(),s.end());
        ans+=s;
    }
    return ans;
}


int main() {
	// your code goes here
	string s=g(2,3);
	cout<<s<<endl;
	return 0;
}

