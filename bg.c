#include<iostream>
#include<string>
using namespace std;

struct b_process{
    int pid;
    string input;
};

int main(){
    vector<b_process> back;
    
    while(true){
        string n;
        getline(cin,n);
        if(n.empty())
            continue;
            
        if(n.back()=='&'){
            n.pop_back();
            p_pid pid = fork();
            if(pid == 0){
                system(n.c_str());
                exit(0);
            }
            else if(pid>0){
                b_process new={pid,n};
                b_process.push_back(new);
                cout<<pid<<endl;
            }
            else
                cerr<<"Fork failed."<<endl;
        }
        else{
            system(input.c_str());
        }
    }
}