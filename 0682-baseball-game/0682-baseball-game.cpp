class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int>task;

        for(int i=0;i<n;i++){
            if(operations[i]=="+"){
                task.push_back(task[task.size()-1]+task[task.size()-2]);
            }else if(operations[i]=="D"){
                task.push_back(2*task.back());
            }else if(operations[i]=="C"){
                task.pop_back();
            }else{
                task.push_back(stoi(operations[i]));
            }
        }
            int sum = 0;
        for(int i=0;i<task.size();i++){
            sum+=task[i];
        }

        return sum;
    }
};