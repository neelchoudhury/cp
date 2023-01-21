#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<int> f(const vector<vector<int> > &A) {
	vector<int> result;
	
	int cnt=A[0].size();
    int m=A[0].size();
    int n=A.size();
    int qq[n][m];
    for(int i=0; i<n; i++)
    	 for(int j=0; j<m; j++)
    	 	qq[i][j]=0;
   /* for(int i=0; i<n; i++)
    {
    	 {
    	 	for(int j=0; j<m; j++)
    	 		cout<<qq[i][j]<< " ";
		 }
    	cout<<endl;
    }*/
    n-=1;
    int i=0,j=0,f=0;
    while((m>0 or  n>0) and (i>=0 and i<A.size()) and (j>=0 and j<A[0].size()))
    {
    	//cout<<" sdvsdv "<<endl;
    	if(f%2==0)
    	{
    		 
    		
    		if(f==0)
    		{
    			for(int k=0; k<m and qq[i][j]!=-9999; k++)
    			result.push_back(A[i][j]),qq[i][j]=-9999, j++;
    			i+=1,f=1,j-=1;
			}
    		else
    		{
    			for(int k=0; k<m and qq[i][j]!=-9999; k++)
    			result.push_back(A[i][j]),qq[i][j]=-9999, j--;
    		
    			i-=1; f=3,j+=1;
			}
    		m-=1;
		}
		else if(f%2==1)
		{
			
			if(f==1)
			{
			//	cout<<"ffff "<<qq[i][j]<<" "<<i<<" "<<j<<endl;
				for(int k=0; k<n and qq[i][j]!=-9999; k++)
				result.push_back(A[i][j]),qq[i][j]=-9999, i++;
				j-=1,f=2,i-=1;
			}
			else
			{
				for(int k=0; k<n and qq[i][j]!=-9999; k++)
				result.push_back(A[i][j]),qq[i][j]=-9999,i--;
				j+=1,f=0,i+=1;
			}
			n-=1;
		}
	/*	for(int i=0; i<1; i++)
    	{
    		for(int j=0; j<4; j++)
    	 	cout<<qq[i][j]<<" ";
    	cout<<endl;
		}*/
	}
	// DO STUFF HERE AND POPULATE result
	return result;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
}


int main()
{
	vector<vector<int> > A;
	vector<int> B;
	for(int i=0; i<1; i++)
	{
		
		for(int j=0; j<4; j++)
		{
			B.push_back((i+1)*(j+1));
			//cout<<A[i][j]<<" ";
		}
		A.push_back(B);
		B.clear();
		
		//cout<<endl;
	}
	//B=f(A);
	for(int i=0; i<1; i++)
	{
		
		for(int j=0; j<4; j++)
		{
			//B.push_back((i+1)*(j+1));
			cout<<A[i][j]<<" ";
		}
	//	A.push_back(B);
		cout<<endl;
	}
	B.clear();
	B=f(A);
	for(int i=0; i<B.size(); i++)
		cout<<B[i]<<" ";
	cout<<endl;
	return 0;
}
