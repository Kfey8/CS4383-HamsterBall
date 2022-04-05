#include <iostream>
#include <cassert>
#include "Mat4x4/Mat4x4.h"
#include "Vector3/Vector3.h"


void projectPart1();
void projectPart2();


int main(){
	//projectPart1();
	projectPart2();
}

void projectPart2() {
	float testArr[16] = { 4,5,1,-6,1,-2,8,3,3,-1,3,11,7,6,3,1 };
	Mat4x4 testMat(testArr);
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << testMat(i, j) << ' ';
		}
		std::cout << '\n';
	}


	testMat = testMat * testMat.translateMat(0, 20, 0);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << testMat(i, j) << ' ';
		}
		std::cout << '\n';
	}

}


void projectPart1(){
	Vector3 V1(8,4,2);
    Vector3 V2(3,2,1);
    
    Vector3 unitV1 = V1.unitVec();
    Vector3 crossProd12 = V1 % V2;
    float dotProd12 = V1 * V2;
    
    std::cout << "\nVectors for Problem 1 - 3:\nV1 = <8,4,2>\nV2 = <3,2,1>\n";
    
    std::cout << "Problem 1: V1 Dot Product V2 = " << dotProd12 << "\n\n";
    std::cout << "Problem 2: V1 x V2:\nx = " << crossProd12.x << "\ny = " << crossProd12.y << "\nz = " << crossProd12.z << "\n\n";
    std::cout << "Problem 3: Unit Vector of V1:\nx = " << unitV1.x << "\ny = " << unitV1.y << "\nz = " << unitV1.z << "\n\n";
    
    
    
	float test[16] = {4,5,1,-6,1,-2,8,3,3,-1,3,11,7,6,3,1};
	
	Mat4x4 problem4(test);
	std::cout << "Matrix used for Problems 4 & 5:\n";

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			std::cout << problem4(i,j) << ' ';
		}
		std::cout << '\n';
	}
	std::cout << "\nProblem 4 (The matrix squared):\n\n";
	Mat4x4 multP = problem4 * problem4;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			std::cout << multP(i,j) << ' ';
		}
		std::cout << '\n';
	}


	Mat4x4 invP = problem4.invertMat();
	std::cout << "\n\nProblem 5 (matrix inverse): (det = " << problem4.determinant() << ") \n\n";
	


	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			std::cout << invP(i,j) << ' ';
		}
		std::cout << '\n';
	}
	std::cout << '\n';
}
