#include "geometry.h"
#include <math.h>
float areaOfCircle(float radius){
    return M_PI * radius * radius;
}
float areaOfRectangle(float width, float height){
    return width * height;
}
float volumeOfBox(float l, float w, float h){
    return l * w * h;
}