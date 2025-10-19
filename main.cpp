#include <iostream>
#include "snake.h"

using namespace std;
typedef vector<pair<int,int>> vec_pair; 

snake mySnek;

// Initialise the grid with a default size of 100x100
void initGrid(int len=10, int wid=10){
    vec_pair snake_pos = mySnek.getBodyPos();

    for(int i=0; i<len; i++){
        cout << "\n";
        for(int j=0; j<wid; j++){
            if(i==0 || i==len-1 || j==0 || j==wid-1){
                cout << " # ";
            } else {
                cout << " . ";
            }
        }
    }

    for(pair<int,int> pos : snake_pos){
        
    }
}

int main(){
    cout << "mySnek is " << mySnek.getLength() << " cm long!"; 
    initGrid();
    return 0;
}