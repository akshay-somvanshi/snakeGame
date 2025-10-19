#ifndef SNAKE_H
#define SNAKE_H

#include <vector>

using namespace std;

typedef vector<pair<int,int>> vec_pair; 

class snake{
    private:
        int length;
        int pos_x; 
        int pos_y;
        vec_pair body;
        
    public:
        snake();
        int getLength();
        vec_pair getBodyPos();
        void addPosToBody(int x, int y);
};

#endif