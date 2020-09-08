#include<bits/stdc++.h>
#define ll long long int
#define inf 1000000007

using namespace std;

string an[200010];
int ans[200010];

class BinaryHeap
{
    private:
        vector <int> heap;
        int left(int parent);
        int right(int parent);
        int parent(int child);
        void heapifyup(int index);
        void heapifydown(int index);
    public:
        BinaryHeap()
        {}
        void Insert(int element);
        void DeleteMin();
        int ExtractMin();
        void DisplayHeap();
        int Size();
};
/*
 * Return Heap Size
 */
int BinaryHeap::Size()
{
    return heap.size();
}
 
/*
 * Insert Element into a Heap
 */
void BinaryHeap::Insert(int element)
{
    heap.push_back(element);
    heapifyup(heap.size() -1);
}
/*
 * Delete Minimum Element
 */
void BinaryHeap::DeleteMin()
{
    if (heap.size() == 0)
    {
        //cout<<"Heap is Empty"<<endl;
        return;
    }
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    heapifydown(0);
    //cout<<"Element Deleted"<<endl;
}
 
/*
 * Extract Minimum Element
 */
int BinaryHeap::ExtractMin()
{
    if (heap.size() == 0)
    {
        return -inf;
    }
    else
        return heap.front();
}
 
/*
 * Display Heap
 */
void BinaryHeap::DisplayHeap()
{
    vector <int>::iterator pos = heap.begin();
    cout<<"Heap -->  ";
    while (pos != heap.end())
    {
        cout<<*pos<<" ";
        pos++;
    }
    cout<<endl;
}
 
/*
 * Return Left Child
 */
int BinaryHeap::left(int parent)
{
    int l = 2 * parent + 1;
    if (l < heap.size())
        return l;
    else
        return -1;
}
 
/*
 * Return Right Child
 */
int BinaryHeap::right(int parent)
{
    int r = 2 * parent + 2;
    if (r < heap.size())
        return r;
    else
        return -1;
}
 
/*
 * Return Parent
 */
int BinaryHeap::parent(int child)
{
    int p = (child - 1)/2;
    if (child == 0)
        return -1;
    else
        return p;
}
 
/*
 * Heapify- Maintain Heap Structure bottom up
 */
void BinaryHeap::heapifyup(int in)
{
    if (in >= 0 && parent(in) >= 0 && heap[parent(in)] > heap[in])
    {
        int temp = heap[in];
        heap[in] = heap[parent(in)];
        heap[parent(in)] = temp;
        heapifyup(parent(in));
    }
}
 
/*
 * Heapify- Maintain Heap Structure top down
 */
void BinaryHeap::heapifydown(int in)
{
 
    int child = left(in);
    int child1 = right(in);
    if (child >= 0 && child1 >= 0 && heap[child] > heap[child1])
    {
       child = child1;
    }
    if (child > 0)
    {
        int temp = heap[in];
        heap[in] = heap[child];
        heap[child] = temp;
        heapifydown(child);
    }
}
 

int main()
{
	ll n;
	cin>>n;
	BinaryHeap h;
	string s;
	int x,j=0;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		if(s=="insert")
		{
			cin>>x;
			h.Insert(x);
			//cout<<s<<" "<<x<<endl;
			an[j]=s,ans[j++]=x;
		}
		else if(s=="removeMin")
		{
			if(h.Size()>0)
			{
				h.DeleteMin();
				//cout<<s<<endl;
				an[j++]=s;
			}
			else
			{
				//cout<<"insert"<<" "<<1<<endl;
				//cout<<s<<endl;
				an[j]="insert",ans[j++]=1;
				an[j++]=s;
				//cout<<"Happening"<<endl;
				//cout<<an[0]
			}
		}
		else if(s=="getMin")
		{
			cin>>x;
			if(h.Size()>0)
			{
				if(h.ExtractMin()==x)
				{
					//cout<<s<<" "<<x<<endl;
					an[j]=s,ans[j++]=x;
				}
				else if(h.ExtractMin()<x)
				{
					while(h.ExtractMin()<x)
					{
						h.DeleteMin();
						//cout<<"removeMin"<<endl;
						an[j++]="removeMin";
						if(h.Size()==0)
						    break;
					}
					if(h.ExtractMin()==x)
					{
						//cout<<s<<" "<<x<<endl;
						an[j]=s, ans[j++]=x;
					}
					else if(h.Size()==0 or h.ExtractMin()>x)
					{
						//cout<<"insert "<<x<<endl;
						//cout<<s<<" "<<x<<endl;
						h.Insert(x);
						an[j]="insert",ans[j++]=x;
						an[j]=s,ans[j++]=x;
					}
				}
				else if(h.ExtractMin()>x)
				{
					//cout<<"insert "<<x<<endl;
					//cout<<s<<" "<<x<<endl;
					h.Insert(x);
					an[j]="insert",ans[j++]=x;
					an[j]=s,ans[j++]=x;
				}
			}
			else
			{
				//cout<<"insert "<<x<<endl;
				//cout<<s<<" "<<x<<endl;
				h.Insert(x);
				an[j]="insert",ans[j++]=x;
				an[j]=s,ans[j++]=x;
			}
		}
	}
	cout<<j<<endl;
	for(int i=0; i<j; i++)
	{
	    cout<<an[i]<<" ";
	    if(an[i]!="removeMin")
	        cout<<ans[i];
	    cout<<endl;
	}
	return 0;
}
