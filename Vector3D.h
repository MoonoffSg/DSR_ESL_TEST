#ifndef _VECTOR3D_
#define _VECTOR3D_
#include <stdio.h>
typedef struct{
    double c1;
    double c2;
    double c3;

}Vector3d;

void printVector();
Vector3d crossVector3d(Vector3d vec1, Vector3d vec2);
Vector3d sumVector3d(Vector3d vec1, Vector3d vec2);
Vector3d subVector3d(Vector3d vec1, Vector3d vec2);
double   dotVector3d(Vector3d vec1, Vector3d vec2);
#endif