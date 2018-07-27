#include <bits/stdc++.h>

using namespace std;

int checkParen(string paren){

        int pointerA=0;
        int pointerB=0;
        int pointerC=0;
        
      //  cout << paren.size() << endl;
        
        for(int i=0; i<paren.size(); ++i){
            if(paren[i] == '{'){
                pointerA++;
            }else if(paren[i] == '('){
                pointerB++;
            }else if(paren[i] == '['){
                pointerC++;
            }
            
            if(paren[i] == '}'){
                pointerA--;
            }else if(paren[i] == ')'){
                pointerB--;
            }else if(paren[i] == ']'){
                pointerC--;
            }
        }
        
        if(pointerC ==0 && pointerA ==0  && pointerB ==0  ){
            return 0;
        }else{
            return 1;
        }
        
     //   cout << pointer << endl;
        
}

int main(){
    int testcase;
    string paren;
    
    cin >> testcase;
    
     while(testcase > 0){
         
         cin >> paren;
    
            int ans;
            ans = checkParen(paren);
            
            if(ans==0){
                cout << "balanced" << endl;
            }else{
                cout << "not balanced" << endl;
            }
            
            testcase--;
    
     }
}
