#pragma once
#include <struct.h>
#include <assert.h>
#include <Novice.h>
#include <cmath>
#include <math.h>

//1. X軸回転行列
Matrix4x4 MakeRotateXMatrix(float radian);

//2. Y軸回転行列
Matrix4x4 MakeRotateYMatrix(float radian);

//3. Z軸回転行列
Matrix4x4 MakeRotateZMatrix(float radian);

Matrix4x4  Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

//4.XYZ軸回転行列
Matrix4x4 RotateMatrix();

// アフィン変換行列計算関数
Matrix4x4 MakeAffineMatrix(const Vector3 & scale, const Vector3 & rot, const Vector3 & translate);

//数値表示
static const int kColumnWidth = 60;
static const int kRowHeight = 20;

void MatrixScreenPrint(int x, int y, const Matrix4x4& matrix);