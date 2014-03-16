//
//  ZCube.h
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZExperimental__ZCube__
#define __ZExperimental__ZCube__

#include <iostream>

#include "ZEntidadDibujable.h"

class ZCubo {
    ZEntidadDibujable dibujable;
    
public:
    
    
    ZCubo( zeShader *_shader );
    ZEntidadDibujable * get_dibujable( ){ return &dibujable; };
    void update();
    void draw();
};



#endif /* defined(__ZExperimental__ZCube__) */
