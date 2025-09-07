#include <stdio.h>
#include <math.h>
typedef struct Point{
    int x;
    int y;
} Point;  
int calcDist(int x1, int y1, int x2, int y2){
    int dist, x, y;
    x = x2 - x1;
    y = y2 - y1;
    dist = sqrt(pow(x,2)+pow(y,2));
    return dist;
}
int main(){
    Point a1 = {1,12};
    Point a2 = {10,13};
    printf("%i\n",calcDist(a1.x,a1.y,a2.x,a2.y));
    return 0;
}