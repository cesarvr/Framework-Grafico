//
//  ZPosicion.h
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZExperimental__ZPosicion__
#define __ZExperimental__ZPosicion__

#include <iostream>


#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp" 

using namespace glm;


class Posicion{
    
    
private:
    mat4 modelo;
    
public:
    Posicion();
    void set_posicion(float x, float y, float z);
    void set_rotacion(float x, float y, float z);
    mat4 get_modelo();
    
};

#endif /* defined(__ZExperimental__ZPosicion__) */
