#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define ALPHABETS 26
#define CASE 'a'
#define MAX_WORD_SIZE 25

using namespace std;

struct node
{
    struct node * parent;
    struct node * children[ALPHABETS];
    vector<int> occurrences;
};

// Inserts a word 'text' into the Trie Tree
// 'trieTree' and marks it's occurence as 'index'.
void insertWord(struct node * trieTree, char * word, int index)
{
    struct node * traverse = trieTree;

    while (*word != '\0') {     // Until there is something to process
        if (traverse->children[*word - CASE] == NULL) {
            // There is no node in 'trieTree' corresponding to this alphabet

            // Allocate using calloc(), so that components are initialised
            traverse->children[*word - CASE] = (struct node *) calloc(1, sizeof(struct node));
            traverse->children[*word - CASE]->parent = traverse;  // Assigning parent
        }

        traverse = traverse->children[*word - CASE];
        ++word; // The next alphabet
    }

    traverse->occurrences.push_back(index);      // Mark the occurence of the word
}

// Searches for the occurence of a word in 'trieTree',
// if not found, returns NULL,
// if found, returns poniter pointing to the
// last node of the word in the 'trieTree'
// Complexity -> O(length_of_word_to_be_searched)
struct node * searchWord(struct node * treeNode, char * word)
{
    // Function is very similar to insert() function
    while (*word != '\0') {
        if (treeNode->children[*word - CASE] != NULL) {
            treeNode = treeNode->children[*word - CASE];
            ++word;
        } else {
            break;
        }
    }

    if (*word == '\0' && treeNode->occurrences.size() != 0) {
        // Word found
        return treeNode;
    } else {
        // Word not found
        return NULL;
    }
}

// Searches the word first, if not found, does nothing
// if found, deletes the nodes corresponding to the word
void removeWord(struct node * trieTree, char * word)
{
    struct node * trieNode = searchWord(trieTree, word);

    if (trieNode == NULL) {
        // Word not found
        return;
    }

    trieNode->occurrences.pop_back();    // Deleting the occurence

    // 'noChild' indicates if the node is a leaf node
    bool noChild = true;

    int childCount = 0;
    // 'childCount' has the number of children the current node
    // has which actually tells us if the node is associated with
    // another word .This will happen if 'childCount' != 0.
    int i;

    // Checking children of current node
    for (i = 0; i < ALPHABETS; ++i) {
        if (trieNode->children[i] != NULL) {
            noChild = false;
            ++childCount;
        }
    }

    if (!noChild) {
        // The node has children, which means that the word whose
        // occurrence was just removed is a Suffix-Word
        // So, logically no more nodes have to be deleted
        return;
    }

    struct node * parentNode;     // variable to assist in traversal

    while (trieNode->occurrences.size() == 0 && trieNode->parent != NULL && childCount == 0) {
        // trieNode->occurrences.size() -> tells if the node is associated with another word
        //
        // trieNode->parent != NULL -> is the base case sort-of condition, we simply ran
        // out of nodes to be deleted, as we reached the root
        //
        // childCount -> does the same thing as explained in the beginning, to every node
        // we reach

        childCount = 0;
        parentNode = trieNode->parent;

        for (i = 0; i < ALPHABETS; ++i) {
            if (parentNode->children[i] != NULL) {
                if (trieNode == parentNode->children[i]) {
                    // the child node from which we reached
                    // the parent, this is to be deleted
                    parentNode->children[i] = NULL;
                    free(trieNode);
                    trieNode = parentNode;
                } else {
                    ++childCount;
                }
            }
        }
    }
}

char wd[200010];
vector<char*> v;

int main()
{
    ll n;
    cin>>n;
    char c;
    
    for(ll i=0; i<n; i++)
    {
        cin>>c>>wd;
        cout<<"c "<<wd<<endl;
        struct node * trieTree = (struct node *) calloc(1, sizeof(struct node));
        if(c=='-')
        {
            insertWord(trieTree, wd, i+1);
        }
        else
        {
            v.push_back(wd);
        }
    }
    cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl;

    // for(ll i=0; i<v.size(); i++)
    //     cout<<v[i]<<endl;
}