import java.util.*;

class DFS{
	
	private int V;
	private LinkedList<Integer> adj[];
	
	DFS(int v){
		V = v;
		adj = new LinkedList[v];
		for(int i=0;i<v;i++){
			adj[i] = new LinkedList();
		}
	}
	
	void addEdge(int v, int w){
		adj[v].add(w);
	}
	
	void DFSinitialise(int start){
		boolean visited[] = new boolean[V];
		algorithm(start, visited);
		System.out.println();
	}
	
	void algorithm(int start, boolean visited[]){
		visited[start] = true;
		System.out.print(start+" ");
		
		Iterator<Integer> i = adj[start].listIterator();
		while(i.hasNext()){
			int n = i.next();
			if(!visited[n]){
				algorithm(n, visited);
			}
		}
	} 
	
	public static void main(String[] args){
		DFS ob = new DFS(4);
		
		ob.addEdge(0,1);
		ob.addEdge(0,2);
		ob.addEdge(1,2);
		ob.addEdge(2,0);
		ob.addEdge(2,3);
		ob.addEdge(3,3);
		
		System.out.print("DFS of the above graph: ");
		ob.DFSinitialise(2);
	}
}


