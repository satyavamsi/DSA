import java.util.*;

class BFS{
	
	private int V;
	private LinkedList<Integer> adj[];
	
	BFS(int v){
		V = v;
		adj = new LinkedList[v];
		for(int i=0;i<v;i++){
			adj[i] = new LinkedList();
		}
	}
	
	void addEdge(int v, int w){
		adj[v].add(w);
	}
	
	void algorithm(int start){
		boolean visited[] = new boolean[V];
		LinkedList<Integer> queue = new LinkedList<Integer>();
		
		visited[start] = true;
		queue.add(start);
		
		while(queue.size() != 0){
			start = queue.poll();
			System.out.print(start+" ");
			
			Iterator<Integer> i = adj[start].listIterator();
			while(i.hasNext()){
				int n = i.next();
				if(!visited[n]){
					visited[n] = true;
					queue.add(n);
				}
			}
		}
		
		System.out.println();
	} 
	
	public static void main(String[] args){
		BFS ob = new BFS(4);
		
		ob.addEdge(0,1);
		ob.addEdge(0,2);
		ob.addEdge(1,2);
		ob.addEdge(2,0);
		ob.addEdge(2,3);
		ob.addEdge(3,3);
		
		System.out.print("BFS of the above graph: ");
		ob.algorithm(2);
	}
}


