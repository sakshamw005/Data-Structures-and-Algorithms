class ProductOfNumbers {
    List<Integer> l ;
    public ProductOfNumbers() {
        l = new ArrayList<>() ;
    }
    
    public void add(int num) {
        l.add(num) ;
    }
    
    public int getProduct(int k) {
        int ans = 1 ;
        for(int i = l.size()-1 ; i>=0 && k>0 ; i-- ){
            ans *= l.get(i) ;
            k-- ;
        }
        return ans;
    }
}

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers obj = new ProductOfNumbers();
 * obj.add(num);
 * int param_2 = obj.getProduct(k);
 */