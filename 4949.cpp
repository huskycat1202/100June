#include<iostream>
#include<string>
using namespace std;

int main(){
    while(1){
        char x[100]; cin.getline(x,100,'\n');
        if(x[0]=='.' && x[1]=='\0') return 0;
        int a = 0, b=0;
        for(int i=0; x[i]!='\0'; i++){
            if(a<0 || b<0) break;
            if(x[i]=='(') a++;
            else if(x[i]==')') a--;
            else if(x[i]=='[') b++;
            else if(x[i]==']') b--;
        }
        if(a==0 && b==0) cout << "yes" << "\n";
        else cout << "no" << "\n";  
    }
}