
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