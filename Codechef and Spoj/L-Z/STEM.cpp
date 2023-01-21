#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)

using namespace std;

//char a[11][25];

int pos1=0,pos2=0;

vector<string> v,qq;

int flag=0;

 void LCSubStr(char X[], char Y[], int m, int n)
{
    // Create a table to store lengths of longest common suffixes of
    // substrings.   Notethat LCSuff[i][j] contains length of longest
    // common suffix of X[0..i-1] and Y[0..j-1]. The first row and
    // first column entries have no logical meaning, they are used only
    // for simplicity of program
    int LCSuff[m+1][n+1];
    int result = 0;  // To store length of the longest common substring
 //cout<<"   snvnsnv"<<endl;
    /* Following steps build LCSuff[m+1][n+1] in bottom up fashion. */
    for (int i=0; i<=m; i++)
    {
    	//cout<<"            jsbvshhvisbaivb"<<endl;
        for (int j=0; j<=n; j++)
        {
        	//cout<<"       25428th852t"<<endl;
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i-1] == Y[j-1])
            {
            	//cout<<"   #$%$#^%&jvsjd"<<endl;
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
                if(LCSuff[i][j]>result)
                {
                	result=LCSuff[i][j];
                	
                	string s="";
                	for(int k=j-result; k<j; k++)
                	{
                		s+=Y[k];
                	}
                	v.push_back(s);
                }
                else if(LCSuff[i][j]==result)
                {
                	string s="";
                	for(int k=j-result; k<j; k++)
                	{
                		s+=Y[k];
                	}
                 
                		 
                		v.push_back(s);
                		
                	 
                }
            }
            else LCSuff[i][j] = 0;
        }
    }
    sort(v.begin(), v.end());
    if(qq.size()==0)
    {
    	for(int i=0; i<v.size(); i++)
    	{
    		qq.push_back(v[i]);
    	}
    }
    else
    {int i=0,j=0;
    	for(; i<v.size() and j<qq.size(); )
    	{
    		if(v[i]==qq[j])
    		{
    			i++;
    			j++;
    		}
    		else if(v[i]>qq[j])
    		{
    			qq.erase(qq.begin()+j);
    		}
    		else if(v[i]<qq[j])
    		{
    			i++;
    		}
    	}
    	if(qq.size()>0)
    	{
    	while(j<qq.size()-1)
    	{
    		qq.erase(qq.begin()+j);
    	}
    	}
    }
     v.clear();
}

int main()
{
	//ios;
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char a[25],b[25];
		//memset(a,0,sizeof(a));
		 
		scanf("%s", a);
		//cout<<"kgfgsfb"<<endl;
		for(int i=1; i<=n-1; i++)
		{
			scanf("%s",b);
			//cout<<"doing"<<endl;
			int l1=strlen(a),l2=strlen(b);
			LCSubStr(a , b,l1,l2);
			strcpy(a,b);
		}
		/*for(int i=0; i<qq.size(); i++)	
		cout<<qq[i]<<endl;*/
		cout<<qq[qq.size()-1]<<endl;
		qq.clear();
	}
	/*for(int i=0; i<qq.size(); i++)	
		cout<<qq[i]<<endl;*/
	
	return 0;
}
