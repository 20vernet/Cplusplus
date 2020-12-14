#include "config.h"



 void add_snake( int* snake, int* bg, int& snl, const int nx, const int ny ){
        for(int i = 0; i<snl; i++){
            int x_i = snake[i];
            int y_i = snake[SNAKE_LEN + i];
            bg[x_i + y_i*nx] = 1;
        }
  
    }

    void remove_snake( int* snake, int* bg, int& snl, const int nx, const int ny ){
        for(int i = 0; i<snl; i++){
            int x_i = snake[i];
            int y_i = snake[SNAKE_LEN + i];
            bg[x_i + y_i*nx] = -1;
        }
    }