#ifndef _pedestrianDetection
#define _pedestrianDetection

# define M_PI 3.14159265358979323846  /* pi */

#include<iostream>
#include<stdio.h>
#include<opencv2\core\core.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv\cv.h>
#include<math.h>
//#include<queue>
//#include<string>
//#include<iomanip>

using namespace cv;
using namespace std;

void buildHOG(Mat, int *);
void trainHOG ();

#endif
