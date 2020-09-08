#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back 
#define ss second 

using namespace std;

ll s[50010],d[50010],k[50010],a[50010];
char x[50010];

struct Job
{
    ll s, f, p;
};

Job arr[50010];
 
// A utility function that is used for sorting events
// according to finish time
bool comp(Job s1, Job s2)
{
    return (s1.f < s2.f);
}
 
// Find the latest job (in sorted array) that doesn't
// conflict with the job[i]. If there is no compatible job,
// then it returns -1.
ll l(Job arr[], ll i)
{
    for (ll j=i-1; j>=0; j--)
    {
        if (arr[j].f<= arr[i-1].s)
            return j;
    }
    return -1;
}
 
// A recursive function that returns the maximum possible
// profit from given array of jobs.  The array of jobs must
// be sorted according to finish time.
ll fr(Job arr[], ll n)
{
    // Base case
    if (n == 1) return arr[n-1].p;
 
    // Find profit when current job is inclueded
    ll inclProf = arr[n-1].p;
    ll i = l(arr, n);
    if (i != -1)
      inclProf += fr(arr, i+1);
 
    // Find profit when current job is excluded
    ll exclProf = fr(arr, n-1);
 
    return max(inclProf,  exclProf);
}
 
// The main function that returns the maximum possible
// profit from given array of jobs
ll ff(ll n)
{
    // Sort jobs according to finish time
    sort(arr, arr+n, comp);
 	for(int i=0; i<n; i++)
 	{
 		// cout<<arr[i].s<<" "<<arr[i].f<<" "<<arr[i].p<<endl;
 	}
    return fr(arr, n);
}



int main()
{
	ll t,n;
	
	cin>>t;
	ll ans=0;
	ll qq=0;
	ll f=0;
	while(t--)
	{	
		cin>>n;
		mem(s);mem(d);mem(k); 
		f=0;
		for(int i=0; i<n;i++)
		{
			cin>>s[i]>>d[i]>>k[i]>>x[i];
			if(x[i]=='I' and s[i]>=qq)
			{
				ans+=k[i];
				a[i]=1;
				qq=s[i]+d[i];
			}
			else if(x[i]=='I' and s[i]<qq)
			{
				f=1;
				break;
			}
			
			 
		}
		if(f==1)
			{
				cout<<-1<<endl;
				 
			}
		else
		{
			ll j=0,kk=0;
			ll st=0,en=0;
			for(ll i=0;i<n; i++)
			{
				if(a[i]==1 or i==n-1)
				{//cout<<"dd "<<i<<endl;
				
					ll qq=j+1;
					
					// cout<<"bith "<<qq<<endl;
					ll aa=j+1;
						while(s[aa]<s[j]+d[j] and aa<i )
						{
						    //cout<<aa<<" "<<j<<" "<<s[aa]<<" kk "<<s[j]+d[j]<<endl;
							aa++;
							// cout<<"nn "<<qq<<" "<<i<<endl;
						}
						if(i==n-1 and a[i]==0)
				{
				    i++;
				    s[i]=INT_MAX;
				}
				ll l=0;
					for(   ; aa<i;)
					{
					
						st=aa;
					//	cout<<"chich "<<aa<<" "<<j<<" "<<i<<endl;
					    if(aa<i)
					    {
						
						// cout<<"end"<<endl;
					//	cout<<"ff "<<s[i]<<endl;
						if(s[aa]+d[aa]<=s[i])
						{
						    //cout<<"plue"<<endl;
							arr[l].s=s[aa];
							arr[l].f=s[aa]+d[aa];
							arr[l].p=k[aa];
							l++;
						}
						aa++;
					    }
						// cout<<"jj "<<qq<<" "<<l<<endl;
					}	
					en=aa;
					kk--;
					j=i;
				//	cout<<"l "<<l<<endl; 
					//cout<<"ching "<<j<<" "<<i<<endl;
					 if(l>0)
					 	ans+=ff(l);

				}

			}
			cout<<ans<<endl;
		}
	}
}