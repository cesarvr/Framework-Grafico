//
//  ZGeometriaObject.h
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZExperimental__ZGeometriaObject__
#define __ZExperimental__ZGeometriaObject__

#include <iostream>
#include "glfw3.h"
#include "zeShader.h"


#define TAMANO_POSICION 3 
#define TAMANO_NORMAL 3 
#define TAMANO_COLOR 3 
#define TAMANO_TEXTURA 2


class ZGeometriaObject {
private:
    
    GLuint verticesBufferObject;
    GLuint indicesBufferObject;
    
    zeShader *shader;
    
    int numero_vertices;
    
    int numero_componentes_vector   = 3;
    int numero_componentes_color    = 3;
    int numero_componentes_normal   = 3;
    int numero_componentes_textura  = 3;
    int tamano_paquete_datos = 0;
    
    unsigned int posicion_shader;
    
    
public:
    ZGeometriaObject( zeShader *_shader );
    
    int get_numero_vertices();
    int get_tamano_paquete();
    void set_vertices( float *vertices, int tamano );
    void set_indices( unsigned short *indices, int tamano );
    
    
    GLuint get_posicion_shader(){ return posicion_shader; };
    GLuint get_vbo();
    GLuint get_vbi();
    
    
    
};



#endif /* defined(__ZExperimental__ZGeometriaObject__) */
