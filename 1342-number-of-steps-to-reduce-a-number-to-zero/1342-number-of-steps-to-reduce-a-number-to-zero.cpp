class Solution {
public:
    void div(int &n,int &count){
        if(n%2==0){
            n/=2;
            count++;
        }else{
            n-=1;
            count++;
        }
    }
    int numberOfSteps(int num) {
        int count = 0;
        while(num!=0){
            div(num,count);
        }
        return count;
    }
};