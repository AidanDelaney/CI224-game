#include <vectormath/scalar/cpp/vectormath_aos.h>
/*
 * Camera.h
 *
 *  Created on: 20 Mar 2011
 *      Author: aidan
 */

#ifndef CAMERA_H_
#define CAMERA_H_

using namespace Vectormath::Aos;

class Camera {
public:
	virtual ~Camera();
	static Camera& getInstance();
	void setCamera(Camera & c);
	void lookAt(const Point3 &eye, const Point3 &point, const Vector3 &up);
	float* getCamera();
	Matrix4& getCameraM();

private:
	Camera(){camera = new Matrix4(Matrix4::identity());};
	Camera(Camera& c){};
	Camera& operator=(Camera const& c){};
	static Camera * c;
	Matrix4 * camera;
};

#endif /* CAMERA_H_ */
