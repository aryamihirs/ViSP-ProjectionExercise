#define TESTDLL_API __declspec(dllexport)
#include <visp3/core/vpPoint.h>
#include <visp3/core/vpMeterPixelConversion.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
extern "C" {
	TESTDLL_API void getXY(double x, double y, double z, double* const XY_2d);
}
