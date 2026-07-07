class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        for (const string& op: operations){
            if (op=="+"){
                score.push_back(score[score.size()-1]+score[score.size()-2]);
            }
            else if(op=="D"){
                score.push_back(2*score[score.size()-1]);
            }
            else if(op=="C"){
                score.pop_back();
            }
            else{
                score.push_back(stoi(op));
                
            }

        }
    int sum=0;
    for (int num: score){
        sum+=num;
    }
    return  sum;
    
    }
};