#include<iostream>
using namespace std;

/* as we know recursion uses a stack so we use head recursion here
starting from start of string till the end tehen start printing the characters */

void reverse(string s){
    if(s.length()==0)
        return;
    else
        reverse(s.substr(1));
        cout<<s[0];

}

int main(){

    cout<<"enter a string: ";
    string str;
    getline(cin,str);
    cout<<"reversed string: ";
    reverse(str);

}

/* dry run with string --> abcde

abcde 
length!=0 
call function with bcde        print pending a
length!=0 
call function with cde         print pending b
length!=0 
call function with de          print pending c
length!=0 
call function with e           print pending d
length!=0 
call function with ""          print pending e
length==0 
---------
tracing back ----> last call
print e
d
c
b
a
*/
