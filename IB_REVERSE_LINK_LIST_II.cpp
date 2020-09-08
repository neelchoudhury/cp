#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;


struct ListNode 
{
  int val;
  ListNode *next;
  ListNode(int x) 
  {
  	val = x;
  	next = NULL;
  }
};
 
ListNode* reverseBetween(ListNode* A, int m, int n) 
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int len = 0;
    
    ListNode* list = A, *prev = NULL, *curr = NULL, *mpos = NULL, *npos = NULL;
    ListNode* temp = NULL;

    A = list;
    
    while(list != NULL)
    {
        if(len == m)
        {
            mpos = prev;
            curr = list;
            list = list->next;
            while(len<=n)
            {
            	cout<<"here"<<endl;
                temp = list->next;
                list->next = prev;
                prev = list;
                list = temp;
                len++;
            }
            mpos->next = prev;
            curr->next = list;
        }
        if(len>0)
        {
            prev = list;
        }
        len++;
        list = list->next;
        
    }
    
    return A;
}


int main()
{
	ListNode * A = new ListNode(3), *B = NULL;

	B = A;

	for(int i = 0; i<8; i++)
	{
		int k = rand()%20;
		// cout<<k<<endl;
		ListNode *list = new ListNode(k);
		A->next = list;
		A = list;
	}

	ListNode *temp = B;

	while(temp != NULL)
	{
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<endl;

	temp = reverseBetween(B, 2, 6);

	while(temp != NULL)
	{
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<endl;
}