public class Test {
    long sum(int[] a) {
        int alen = a.length;
        long ans = 0;
        for(int i=0;i<alen;++i){
            ans += a[i];
        }
        
        return ans;
    }
}
