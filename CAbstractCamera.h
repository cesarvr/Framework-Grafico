//
//  CAbstractCamera.h
//  ZEnginePlus
//
//  Created by Cesar Luis Valdez on 11/10/13.
//  Copyright (c) 2013 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZEnginePlus__CAbstractCamera__
#define __ZEnginePlus__CAbstractCamera__


#include "glm.hpp"
#include "matrix_transform.hpp"


//#include "glm/gtc/quaternion.hpp"
//#include "glm/gtx/quaternion.hpp"

class CAbstractCamera
{
public:
	CAbstractCamera(void);
	~CAbstractCamera(void);
    
	void SetupProjection(const float fovy=45.0f, const float aspectRatio=1.33333f);
	
	virtual void Update() = 0;
	virtual void Rotate(const float yaw, const float pitch, const float roll) = 0;
	//virtual void Translate(const float dx, const float dy, const float dz) = 0;
    
	const glm::mat4 GetViewMatrix() const;
	const glm::mat4 GetProjectionMatrix() const;
    
	void SetPosition(const glm::vec3 v);
	const glm::vec3 GetPosition() const;
    
	glm::mat4 GetMatrixUsingYawPitchRoll(const float yaw, const float pitch, const float roll);
    
	const float GetFOV() const;
	const float GetAspectRatio() const;
    
protected:
	float fov, aspect_ratio;
	static glm::vec3 UP;
	glm::vec3 look;
	glm::vec3 up;
	glm::vec3 right;
	glm::vec3 position;
	glm::mat4 V; //view matrix
	glm::mat4 P; //projection matrix
};




#endif /* defined(__ZEnginePlus__CAbstractCamera__) */
