#include <iostream>
#include <vector>
#include <random>

#include "snake.h"

using namespace std;

// Define an alias for the data type
typedef vector<pair<int,int>> vec_pair; 

// Constructor - Create snake with length 2 at (0,0)
snake::snake() : length(2), pos_x(0), pos_y(0){
    // Add the current position of snake to the variable "body"
    snake::addPosToBody(pos_x, pos_y);
    cout << "Snek created!" << "\n";
}

// Getter method to retrieve current snake positions 
vec_pair snake::getBodyPos(){
    return snake::body;
}

// Setter method to append added body position to the variable "body"
void snake::addPosToBody(int x, int y){
    snake::body.push_back(make_pair(x,y));
}

// Getter method to retrieve current length of snake
int snake::getLength(){
    return snake::length;
}

int main(){
    snake mySnek;
    cout << "Length of snek is: " << mySnek.getLength() << "\n"; 
    return 0;
}