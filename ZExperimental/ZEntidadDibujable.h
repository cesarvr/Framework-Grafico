//
//  ZEntidadDibujable.h
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZExperimental__ZEntidadDibujable__
#define __ZExperimental__ZEntidadDibujable__

#include <iostream>
#include "zeShader.h"
#include "ZGeometriaObject.h"
#include "ZPosicion.h"
#include "CFreeCamara.h"


class ZEntidadDibujable {
private:
    
    ZGeometriaObject *objGLBuffer;
    Posicion *modelo;
    zeShader *shader;
    CFreeCamera *camara;
    
    
    
    
    
    
public:
    
    
    ZEntidadDibujable();
    
    void                set_buffer(    ZGeometriaObject *_objGLBuffer );
    void                set_posicion(  Posicion *_modelo    );
    void                set_shader(    zeShader *_shader    );
    void                set_camara(    CFreeCamera *_camara );
    
    
    
    ZGeometriaObject*   get_buffer();
    Posicion*           get_posicion();
    zeShader*           get_shader();
    
    
    void draw();
    void update();
    
    
};


#endif /* defined(__ZExperimental__ZEntidadDibujable__) */
