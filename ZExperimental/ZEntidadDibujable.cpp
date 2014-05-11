//
//  ZEntidadDibujable.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZEntidadDibujable.h"


ZEntidadDibujable::ZEntidadDibujable() {
    
    glClearColor(0.1f, 0.3f, 0.0f, 1.0f);
    
    // Enable depth test
    glEnable(GL_DEPTH_TEST);
    
    // Accept fragment if it closer to the camera than the former one
    glDepthFunc(GL_LESS);
    
    modelo = Posicion();
    objGLBuffer = ZGeometriaObject();

}


void ZEntidadDibujable::update(){
    shader->usarPrograma();
    
    
    
    mat4 matModelo     =    glm::mat4(1.0f); //modelo.get_modelo();
    mat4 matProjeccion =    camara->GetProjectionMatrix();
                                                   
    mat4 matView       =    camara->GetViewMatrix();
    
    
    mat4 mvp = matProjeccion * matView * matModelo;
    glUniformMatrix4fv(shader->getUniform("MVP"), 1, GL_FALSE, &mvp[0][0]);
    
    shader->soltarPrograma();

}

void ZEntidadDibujable::draw(){
    
    shader->usarPrograma();
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glBindBuffer(GL_ARRAY_BUFFER, objGLBuffer.get_vbo());
    
    
    glVertexAttribPointer(shader->getParametros("position"), TAMANO_POSICION, GL_FLOAT, GL_FALSE, objGLBuffer.vertices_tamano, 0);
    glEnableVertexAttribArray(shader->getParametros("position"));
    
    
    
    glVertexAttribPointer(shader->getParametros("normal"), TAMANO_NORMAL, GL_FLOAT, GL_FALSE, objGLBuffer.vertices_tamano,
                          (GLvoid*) (sizeof(float) * TAMANO_POSICION));
    glEnableVertexAttribArray(shader->getParametros("normal"));
    
    
    //Usamos indices
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, objGLBuffer.get_vbi());
    
    glDrawElements(GL_TRIANGLE_STRIP, objGLBuffer.get_numero_vertices(), GL_UNSIGNED_SHORT, 0);
    
    shader->soltarPrograma();
}

void ZEntidadDibujable::set_camara( CFreeCamera *_camara ){
    camara = _camara;
}

void ZEntidadDibujable::set_buffer( ZGeometriaObject *_objGLBuffer ){
    objGLBuffer = *_objGLBuffer;
};

void ZEntidadDibujable::set_posicion( Posicion *_modelo ){
    modelo = *_modelo;
};

void ZEntidadDibujable::set_shader( zeShader *_shader ){
    shader = _shader;
};

ZGeometriaObject*   ZEntidadDibujable::get_buffer()  {
    return &objGLBuffer;
};
Posicion* ZEntidadDibujable::get_posicion(){
    return &modelo;
};
zeShader* ZEntidadDibujable::get_shader()  {
    return shader;
};



