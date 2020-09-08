#include<bits/stdc++.h>
#define ll long long int

using namespace std;

char a[10010];

void search(ll l, char *txt, ll m)
{
    //int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0;  // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;
  
    // The value of h would be "pow(d, M-1)%q"
    /*for (i = 0; i < M-1; i++)
        h = (h*d)%q;*/
  
    // Calculate the hash value of pattern and first window of text
    for (i = 0; i < M; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }
  
    // Slide the pattern over text one by one 
    for (i = 0; i <= N - M; i++)
    {
        
        // Check the hash values of current window of text and pattern
        // If the hash values match then only check for characters on by one
        if ( p == t )
        {
            /* Check for characters one by one */
            for (j = 0; j < M; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }
            if (j == M)  // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
            {
                printf("Pattern found at index %d \n", i);
            }
        }
         
        // Calculate hash value for next window of text: Remove leading digit, 
        // add trailing digit           
        if ( i < N-M )
        {
            t = (d*(t - txt[i]*h) + txt[i+M])%q;
             
            // We might get negative value of t, converting it to positive
            if(t < 0) 
              t = (t + q); 
        }
    }
}
 

int main()
{
	ll q,m,l,n;
	scanf("%s", a);
	scanf("%lld", &q);
	n=strlen(a);
	while(q--)
	{
		scanf("%lld %lld", &m, &l);
		ll cnt=0;
		ll ans=0;
		ll pw=1;
		ll k=0;
		for(int i=0; i<n; i++)
		{
			k=0;
			while(cnt<l)
			{
				cnt=(cnt*10 + a[i]-'0')%m;
				i++;
				k++;
			}
			cout<<cnt<<endl;
			if(cnt==l)
			{
				ans++;
			}
			cnt=(cnt-(a[i-k]-'0')*(ll)pow(10,k) + m )%m;
			
			
		}
		printf("%lld\n", ans);
	}
	return 0;
}
