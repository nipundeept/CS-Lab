import java.util.*;

public class Graph {
	public static void main(String[] args) {
		List<List<Integer>> adj = new ArrayList<>();
		int n = 6;
		//intialising the adjacency list
		for (int i = 0; i < n; i++) {
			adj.add(new ArrayList<>());
		}
		adj.get(0).add(1);
		adj.get(0).add(2);
		adj.get(0).add(4);
		adj.get(1).add(0);
		adj.get(1).add(2);
		adj.get(1).add(3);
		adj.get(1).add(5);
		adj.get(2).add(0);
		adj.get(2).add(1);
		adj.get(2).add(4);
		adj.get(2).add(5);
		adj.get(3).add(1);
		adj.get(3).add(4);
		adj.get(3).add(5);
		adj.get(4).add(0);
		adj.get(4).add(2);
		adj.get(4).add(3);
		adj.get(5).add(1);
		adj.get(5).add(2);
		adj.get(5).add(3);
		System.out.println("Nodes in the graph are :");
		bfs(6, new int[6], adj);
	}
	
	private static void bfs(int n, int[] distance, List<List<Integer>> adj) {
		Queue<Integer> queue = new ArrayDeque<>();
		Arrays.fill(distance, -1);
		distance[0] = 0;
		queue.offer(distance[0]);
		
		while(!queue.isEmpty()) {
			int value = queue.poll();
			System.out.println(value);
			for (int neighbor : adj.get(value)) {
				if (distance[neighbor] == -1) {
					distance[neighbor] = distance[value] + 1;
					queue.offer(neighbor);
				}
			}
		}
	}
	
	private static void dfs(int n, boolean[] visited, List<List<Integer>> adj) {
	}
}
		
		
		 
