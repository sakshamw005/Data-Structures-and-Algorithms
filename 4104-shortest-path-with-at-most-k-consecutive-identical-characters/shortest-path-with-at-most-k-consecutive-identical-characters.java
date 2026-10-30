class Solution {
    static class States{
        int node ;
        int conti ; 
        long dist ;
        States(int node , int conti , long dist){
            this.node = node;
            this.conti = conti ;
            this.dist = dist ;
        }
    }
    public int shortestPath(int n, int[][] edges, String labels, int k) {
        Map<Integer,List<int[]>> graph = new HashMap<>() ;
        for(int i = 0 ; i<n ; i++)graph.put(i,new ArrayList<>()) ;
        for(int i = 0 ; i<edges.length ; i++){
            int u = edges[i][0] , v= edges[i][1] , w = edges[i][2] ;
            graph.get(u).add(new int[]{v,w}) ;
        }
        long infy = Long.MAX_VALUE / 4 ;
        long[][] dist = new long[n][k+1] ;
        for(int i = 0 ; i<n ; i++){
            Arrays.fill(dist[i],infy) ;
        }
        PriorityQueue<States> pq = new PriorityQueue<>((a,b)-> Long.compare(a.dist,b.dist)) ;
        dist[0][1] = 0 ;
        pq.offer(new States(0,1,0)) ;
        while(!pq.isEmpty()){
            States curr = pq.poll() ;
            if(curr.dist != dist[curr.node][curr.conti])continue ;
            if(curr.node == n-1)return (int)curr.dist ;
            for(int[] e : graph.get(curr.node)){
                int nxt = e[0] , w = e[1] ;
                int eww ;
                if(labels.charAt(nxt) == labels.charAt(curr.node)){
                    eww = curr.conti + 1 ;
                }
                else eww = 1 ;

                if(eww > k)continue ;
                long nd = curr.dist + w ;
                if(nd < dist[nxt][eww]){
                    dist[nxt][eww] = nd ;
                    pq.offer(new States(nxt , eww , nd)) ;
                }
            }
        }
        return -1; 
    }
}