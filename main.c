#include"Vector3D.h"


int main(){
    Vector3d vector1 = {1.4,2.1,5.6};
    Vector3d vector2 = {24.5,1.7,123.2};
    Vector3d resultVector;
    double resultDouble;
    printf("Sum:\n");
    resultVector = sumVector3d(vector1,vector2); 
    printVector(resultVector);

    printf("Sub:\n");
    resultVector = subVector3d(vector1,vector2); 
    printVector(resultVector);

    printf("Cross:\n");
    resultVector = crossVector3d(vector1,vector2); 
    printVector(resultVector);

    printf("Dot: ");
    resultDouble = dotVector3d(vector1,vector2);
    printf("%0.4f\n",resultDouble);

    return 0;
}
