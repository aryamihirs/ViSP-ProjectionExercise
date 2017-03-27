#include "test-point-projection.h"
extern "C" {
	void getXY(double x, double y, double z, double* const XY_2d)
	{

		double oX = x;
		double oY = y;
		double oZ = z;

		// Construct the 3D point
		vpPoint P;
		P.set_oX(oX);
		P.set_oY(oY);
		P.set_oZ(oZ);

		// Homogeneous tranformation from camera frame to object frame
		vpHomogeneousMatrix cMo(0, 0, 0.50, vpMath::rad(0), vpMath::rad(0), vpMath::rad(45));

		// Compute the position of the point in the camera frame
		P.changeFrame(cMo);

		// Compute the perspective projection
		P.project();

		// Set the camera parameters for a 640x480 image
		double px = 600;
		double py = px;
		double uu = 640 / 2.;
		double vv = 480 / 2.;

		vpCameraParameters cam(px, py, uu, vv);

		// Compute the coordinates of the 3D point in the image
		double u, v; // u is the column, v the image row
		vpMeterPixelConversion::convertPoint(cam, P.get_x(), P.get_y(), u, v);

		//Update XY_2d 'double' array with the calculated u,v values
		XY_2d[0] = u;
		XY_2d[1] = v;
	}
}
