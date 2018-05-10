import java.util.*;

public class GraphForBFS
{
	int V;
	LinkedList<Integer> adj[];
	Graph(int v)
	{
		V  = v;
		adj = new LinkedList[V];
		adj[i] = new LinkedList();
	}

	void add(int u,int v)
	{
		adj[u].add(v);
	}

	void bfs(int s)
	{
		Boolean visited[] = new Boolean[V];
		LinkedList<Integer> queue = new LinkedList<Integer>();
		visited[s] = 

	}

	public static void main(String args[])
	{
		GraphForBFS g  = new GraphForBFS(4);
		g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);
        g.bfs(2);  
	}
}