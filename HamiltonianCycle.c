#include<stdio.h>

#define V 50
 
bool isSafe(int v, bool graph[V][V], int path[], int pos)
{
  if (graph[path[pos-1]][v] == 0)
    return false;
  for (int i = 0; i < pos; i++)
    if (path[i] == v)
      return false;
  return true;
}
bool Helper(bool graph[V][V], int path[], int pos,int n)
{
  if (pos == n)
  {
    if (graph[path[pos-1]][path[0]] == 1)
      return true;
    else
      return false;
  }
  for (int v = 1; v < n; v++)
  {
    if (isSafe(v, graph, path, pos))
    {
      path[pos] = v;
      if (Helper(graph, path, pos+1,n) == true)
        return true;
      path[pos] = -1;
    }
  }
  return false;
}
void printSolution(int path[],int n)
{
  printf ("Hamiltonian Cycle:\n");
  for (int i = 0; i < n; i++)
    printf(" %d ", path[i]);
  printf(" %d \n", path[0]);
}
bool HamiltonianCycle(bool graph[V][V],int n)
{
  int *path = new int[V];
  for (int i = 0; i < V; i++)
    path[i] = -1;
  path[0] = 0;
  if(Helper(graph, path, 1, n) == false )
  {
    printf("Solution does not exist\n");
    return false;
  }
  printSolution(path,n);
  return true;
}

int main()
{
  bool graph[V][V];
  int i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      //1 If the vertices are connected, else not
      scanf("%d",&graph[i][j]);
    }
  }
  HamiltonianCycle(graph,n);
  return 0;
}