void topological_sort_util(int v, unsigned short visited[], int stack[], int *size)
{
	visited[v] = true;
 
	// Recursivitate pentru toate nod adiacente acestuia
	int i;
	for (i = 0; i != sizeof(Node.adj[v]); i++)
		if (!visited[*i])
			topological_sort_util(*i, visited, Stack);

	stack[(*size)++] = v;
}
 
void topological_sort()
{
	int stack, size = 0;
	unsigned short visited[V]
	for (int i = 0; i < V; i++)
		visited[i] = false;
 
	for (int i = 0; i < V; i++)
	  if (visited[i] == false)
		topological_sort_util(i, visited, stack, &size);

	while (size > 0)
	{
		printf("%d ", stack[size--]);
	}
}