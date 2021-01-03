#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

vector<int> adj[100000];
int k = 0;

struct node* newNode(int data)
{
    node *root = new node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    
    return root;
}

struct node* create()
{
	int n;
	cin>>n;
	if(n==-1)
		return NULL;
	struct node* root = newNode(n);
	queue<struct node*> q;
	q.push(root);
	while(!q.empty())
	{
		struct node *temp = q.front();
		q.pop();
		cin>>n;
		if(n==-1)
			temp->left = NULL;
		else
		{
			temp->left = newNode(n);
			q.push(temp->left);
		}
		cin>>n;
		if(n==-1)
			temp->right = NULL;
		else
		{
			temp->right = newNode(n);
			q.push(temp->right);
		}
	}
	return root;
}

void subtreedist(struct node* root,int k)
{
	if(root==NULL||k<0)
		return ;
	adj[k++].push_back(root->data);
	subtreedist(root->left,k);
	subtreedist(root->right,k);
}
int find(struct node* root,int target,int k)
{
	if(root==NULL||k<0)
		return -1;
	if(root->data==target)
	{
		subtreedist(root,k);
		return 0;
	}
	int leftdist = find(root->left,target,k);
	if(leftdist!=-1)
	{
		adj[leftdist+1].push_back(root->data);
		subtreedist(root->left,k-leftdist-2);
		return leftdist+1;
	}
	int rightdist = find(root->right,target,k);
	if(rightdist!=-1)
	{
		adj[rightdist+1].push_back(root->data);
		subtreedist(root->right,k-rightdist-2);
		return rightdist+1;
	}
	return -1;
}

void inorder(struct node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        struct node *root = create();
        //cout<<"Created Successfully\n";
        int target;
        cin>>target;
        //inorder(root);
        cout<<k<<endl;
       	find(root,target,0);
       	for(int i=0;i<k;i++)
       	{
       		for(int j=0;j<adj[i].size();j++)
       		{
       			cout<<adj[i][j]<<" ";
       		}
       		cout<<endl;
       	}
    }
    return 0;
}