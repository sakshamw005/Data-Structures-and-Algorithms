class Solution {
    public int totalNumbers(int[] digits) {
        Set<Integer> s = new HashSet<>();
        for(int i = 0 ; i<digits.length ; i++){
            for(int j = 0 ; j<digits.length ; j++){
                if(i==j)continue ;
                for(int k = 0 ; k<digits.length ; k++){
                    if(j==k || i == k || digits[i]==0 || digits[k]%2!=0)continue;
                    int num = digits[k]*100 + digits[j]*10 + digits[i];
                    s.add(num);
                }
            }
        }
        return s.size();
    }
}