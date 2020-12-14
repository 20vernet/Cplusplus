#include "config.h"

void setupSnake( int* snake, int& snl ){
  for(int i = 0; i<snl; i++){
    snake[i] = 8 - i;
    snake[i + SNAKE_LEN] = 4;
  }

}

void backgroundSetup( const int& nx, const int& ny, int* bg ){
  for(int i = 0; i<nx; i++){
    bg[i] = 1;
    //bordure de coordonnées (i,0)
    bg[i + (ny-1)*nx] = 1;//peut etre un pb
    //bordure de coordonnées (i, ny-1)
  }
  for(int j = 0; j<ny; j++){
    bg[j*nx] = 1;
    //bordure de coordonnées (0, j)
    bg[nx-1 + j*nx] = 1;
    //bordure de coordonnées (nx-1, j)
  }

}