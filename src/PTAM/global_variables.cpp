#include "global_variables.h"
#include <cvd/utility.h>
#include <cvd/convolution.h>
#include <cvd/vision.h>
#include <iostream>
#include <string>

// 10 ���ϴ� �ݺ������� ���
// ¦���� �����ϴ� ������ ���������� 1:1 ���
// 
//int globalInteger = 0; // ��� ����
//int globalInteger = 10; // 1ȸ ���
//int globalInteger = 11; // compareNo1
//int globalInteger = 13; // compareNo2
//int globalInteger = 15; // compareNo3
int globalInteger = 17; // ���� ��ü �׽�Ʈ
//int globalInteger = 19; // vision.h#cvd::transform() ��ü(3)
//

int tempArray_count = 0;
CVD::Image<float> temp_mimTemplate[50] = {};
CVD::Image<float> temp_imWarped[50] = {};
TooN::Matrix<2> temp_se2XFormRotMat[50] = {};
TooN::Vector<2> temp_se2XFormTransl[50] = {};
TooN::Vector<2> temp_v2Zero[50] = {};
