#include<bits/stdc++.h>
using namespace std;
int main(){
    char text[51];
    cin >> text;
    int ball[3] = {1,0,0};
    for (int i=0; i<strlen(text); i++){
        if (text[i]=='A'){
            swap(ball[0],ball[1]);
        }
        else if (text[i]=='B'){
            swap(ball[1],ball[2]);
        }
        else if (text[i]=='C'){
            swap(ball[0],ball[2]);
        }
    }
    for (int i=0; i<3; i++){
        if (ball[i]==1){
            cout << i+1;
            break;
        }
    }

    
}