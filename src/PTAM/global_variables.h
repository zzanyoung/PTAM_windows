#pragma once
#ifndef GLOBAL_VARIABLES_H
#define GLOBAL_VARIABLES_H
#include <cvd/utility.h>
#include <cvd/convolution.h>
#include <cvd/vision.h>

extern int globalInteger; // 전역 변수 선언

extern int tempArray_count;
extern CVD::Image<float> temp_mimTemplate[50];
extern CVD::Image<float> temp_imWarped[50];
extern TooN::Matrix<2> temp_se2XFormRotMat[50];
extern TooN::Vector<2> temp_se2XFormTransl[50];
extern TooN::Vector<2> temp_v2Zero[50];
#endif // GLOBAL_VARIABLES_H