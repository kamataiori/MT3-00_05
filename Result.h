#pragma once
#include "MathFunctions.h"

class Result
{
public:
	Vector3 scale{ 1.2f,0.79f,-2.1f };
	Vector3 rotate{ 0.4f,1.43f,-0.8f };
	Vector3 translate{ 2.7f,-4.15f,1.57f };
	Matrix4x4 worldMatrix = MakeAffineMatrix(scale, rotate, translate);


	Result();

	void Updata();

	void Draw();

};