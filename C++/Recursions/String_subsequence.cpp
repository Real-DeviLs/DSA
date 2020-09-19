# include <iostream>
# include <string>

using namespace std;

/*Write a recursive function that, given two strings, returns whether the first string is a
subsequence of the second. For example, given hac and cathartic, you should return true,
but given bat and table, you should return false.*/

bool stringSubsequence(string subseqence,string s);

int main(){
    string mainString;
    string subsequence;

    cout << "Enter the subsequence you want to check: ";
    getline(cin,subsequence);
    cout << "Enter the main string: ";
    getline(cin,mainString);

    if(stringSubsequence(subsequence,mainString)){
        cout << "\nTrue, a Subsequence\n";
    }
    else{
        cout << "\nFalse, Not a Subsequence\n";
    }

    return 0;
}

bool stringSubsequence(string subsequence,string s){
    if(subsequence.length() == 0){
        return true;
    }
    if(s.length() == 0){
        return false;
    }
    if(subsequence[0] == s[0]){
        return stringSubsequence(subsequence.substr(1),s.substr(1));
    }
    else{
        return stringSubsequence(subsequence,s.substr(1));
    }


}

