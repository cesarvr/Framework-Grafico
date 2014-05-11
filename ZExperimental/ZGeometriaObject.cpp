    //
//  ZGeometriaObject.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZGeometriaObject.h"
#include "glfw3.h"


ZGeometriaObject::ZGeometriaObject(){
   
    vertices_tamano = ( TAMANO_POSICION + TAMANO_NORMAL ) * sizeof(float);

}


void ZGeometriaObject::set_vertices( float *vertices_ptr, int tamano_ptr ){
    
    glGenBuffers(1, &verticesBufferObject);
    glBindBuffer(GL_ARRAY_BUFFER, verticesBufferObject);
    glBufferData(GL_ARRAY_BUFFER, tamano_ptr, vertices_ptr, GL_STATIC_DRAW);
    
}

void ZGeometriaObject::set_indices( unsigned short *indices, int tamano_ptr ){

    
    glGenBuffers(1, &indicesBufferObject);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indicesBufferObject);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, tamano_ptr, indices, GL_STATIC_DRAW);
    
    numero_vertices = tamano_ptr / sizeof(unsigned short);
        
}


int    ZGeometriaObject::get_numero_vertices() { return  numero_vertices; };
GLuint ZGeometriaObject::get_vbo()             { return verticesBufferObject; }
GLuint ZGeometriaObject::get_vbi()             { return indicesBufferObject;  }
