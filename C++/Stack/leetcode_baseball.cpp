/*You are keeping score for a baseball game with strange rules. The game consists of several rounds, where the scores of past rounds may affect future rounds' scores.

At the beginning of the game, you start with an empty record. You are given a list of strings ops, where ops[i] is the ith operation you must apply to the record and is one of the following:

An integer x - Record a new score of x.
"+" - Record a new score that is the sum of the previous two scores. It is guaranteed there will always be two previous scores.
"D" - Record a new score that is double the previous score. It is guaranteed there will always be a previous score.
"C" - Invalidate the previous score, removing it from the record. It is guaranteed there will always be a previous score.
Return the sum of all the scores on the record.
REFER TO https://leetcode.com/problems/baseball-game/ */
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>rec;
        int sum=0;
        for(string i:ops){
            if(i=="C"){
                rec.pop();
               
            }
            else if(i=="D"){
               int x= 2*rec.top();
                rec.push(x);
             
            }
            else if(i=="+"){
                int x=rec.top();
                rec.pop();
                int y=rec.top();
                int sum1=x+y;
                rec.push(x);
                rec.push(sum1);
             
                
            }
            else{
                int x=atoi(i.c_str());                
                rec.push(x);               
            }
            
        }
        while(!rec.empty()){
            int x=rec.top();
            sum+=x;
            rec.pop();
        }
        return sum;
    }
};