class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
       vector<int>a;
       vector<int>b;

        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                b.push_back(nums[i]);
            }else{
                a.push_back(nums[i]);
            }
        }

        if(a.size()==0){
            for(int i=0;i<b.size();i++){
                b[i]=b[i]*b[i];
            }
            return b;
        }
        else if(b.size()==0){
            for(int i=0;i<a.size();i++){
                a[i]=a[i]*a[i];
            }
            reverse(a.begin(),a.end());
            return a;
        }else{

            int i=0,j=0;
            int id=0;
            vector<int>res(a.size()+b.size());
            for(int i=0;i<a.size();i++){
                a[i]=a[i]*a[i];
            }
            reverse(a.begin(),a.end());

            for(int i=0;i<b.size();i++){
                b[i]=b[i]*b[i];
            }

            while(i<a.size()&&j<b.size()){
                if(a[i]<=b[j]){
                    res[id]=a[i];
                    id++;
                    i++;
                }else{
                    res[id]=b[j];
                    id++;
                    j++;
                }
            }
            while(i<a.size()){
                res[id]=a[i];
                id++;
                i++;

            }
            while(j<b.size()){
                res[id]=b[j];
                id++;
                j++;
            }

            return res;




        }


    }
};