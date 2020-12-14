#include "config.h"


void snake_movement( char key, int* dxdy ){

if(key == 'z'){
            dxdy[0] = 0;
            dxdy[1] = -1;
        }
        if(key == 'd'){
            dxdy[0] = 1;
            dxdy[1] = 0;
        }
        if(key == 's'){
            dxdy[0] = 0;
            dxdy[1] = 1;
        }
        if(key == 'q'){
            dxdy[0] = -1;
            dxdy[1] = 0;
        }
}

void update_snake_coordinates( int* snake, int& snl, int* dxdy ){
  for(int i = snl-1; i>0; i--){
    snake[i] = snake[i-1];
    snake[SNAKE_LEN + i] = snake[SNAKE_LEN + i -1];
  }
  snake[0] = snake[0] + dxdy[0];
  snake[SNAKE_LEN] = snake[SNAKE_LEN] + dxdy[1];
}