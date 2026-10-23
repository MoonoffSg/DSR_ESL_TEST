#include"Vector3D.h"

void printVector(Vector3d vec){
    printf("Vector = {%0.4f, %0.4f, %0.4f}\n",vec.c1,vec.c2,vec.c3);
}
Vector3d crossVector3d(Vector3d vec1, Vector3d vec2){
    Vector3d res;
    res.c1 = vec1.c2*vec2.c3 - vec1.c3*vec2.c2;
    res.c2 = vec1.c1*vec2.c3 - vec1.c3*vec2.c1;
    res.c3 = vec1.c1*vec2.c2 - vec1.c2*vec2.c1;
    return res;
}
Vector3d sumVector3d(Vector3d vec1, Vector3d vec2){
    Vector3d res;
    res.c1 = vec1.c1 + vec2.c1;
    res.c2 = vec1.c2 + vec2.c2;
    res.c3 = vec1.c3 + vec2.c3;
    return res;
}
Vector3d subVector3d(Vector3d vec1, Vector3d vec2){
    Vector3d res;
    res.c1 = vec1.c1 - vec2.c1;
    res.c2 = vec1.c2 - vec2.c2;
    res.c3 = vec1.c3 - vec2.c3;
    return res;
}
double   dotVector3d(Vector3d vec1, Vector3d vec2){
    double res;
    res = vec1.c1*vec2.c1 + vec1.c2*vec2.c2 + vec1.c3*vec2.c3;
    return res; 
}
