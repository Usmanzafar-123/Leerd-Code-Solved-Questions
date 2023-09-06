class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
       long long mi=min(cost1,cost2);
        long long ma=max(cost1,cost2);
       long long a=0;
        while(total>=0){
            a=a+total/mi;
            total=total-ma;
            a++;
        }
        return a;
    }
};