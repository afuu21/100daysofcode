#include<bits\stdc++.h>
using namespace std;
int main() {
    vector<string> charTranscript;
    charTranscript.push_back("Alice : Hey, how are you?\nBob : I am good\nAlice : Where are you going?\nBob : To my office\nAlice : Take care!");
    int messageNumber = 2;
    string name = "Alice";
    int k=0;
    int ct=0;
    bool b=true, done=false;
    for(int i=0; charTranscript[0][i] != '\0'; i++) {
            k=0;
            b=true;
        if(name[k]==charTranscript[0][i]) {
            while(name[k] != '\0') {
                if(name[k] != charTranscript[0][i]) {
                    b = false;
                    break;
                }
                i++;k++;
            }
            if(b) {
                ct++;
                if(messageNumber == ct) {
                    i+=3;k+=3;
                    while(charTranscript[0][i] != '\n')
                        cout<<charTranscript[0][i++];
                    done = true;
                }
            }
        }
    }
    if(!done)
        cout<<"Not found";

    return 0;
}
