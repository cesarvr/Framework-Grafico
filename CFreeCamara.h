//
//  CFreeCamara.h
//  ZEnginePlus
//
//  Created by Cesar Luis Valdez on 11/10/13.
//  Copyright (c) 2013 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZEnginePlus__CFreeCamara__
#define __ZEnginePlus__CFreeCamara__


#include "CAbstractCamera.h"


#define CAMERASPEED 0.2f
class CFreeCamera :
public CAbstractCamera
{
public:
	CFreeCamera(void);
	~CFreeCamera(void);
    
	void Update();
	void Rotate(const float yaw, const float pitch, const float roll);
	void Walk(const float amount);
	void Strafe(const float amount);
	void Lift(const float amount);
    
    
protected:
	float yaw, pitch, roll;
	
	glm::vec3 translation;
};
#endif /* defined(__ZEnginePlus__CFreeCamara__) */
