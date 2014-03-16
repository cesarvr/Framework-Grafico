//
//  ZEntidadDibujable.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZEntidadDibujable.h"


ZEntidadDibujable::ZEntidadDibujable(){

    
    
    
    
    
    
}


void ZEntidadDibujable::update(){
    shader->usarPrograma();
    
    mat4 matModelo     =    modelo->get_modelo();
    mat4 matProjeccion =    camara->GetProjectionMatrix();
    
    
    
    mat4 mvp = matProjeccion * matModelo;
    
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glUniformMatrix4fv(shader->getUniform("MVP"), 1, GL_FALSE, &mvp[0][0]);
    
    
    
    
    glBindBuffer(GL_ARRAY_BUFFER, objGLBuffer->get_vbo());
    
    
   
    glVertexAttribPointer(_shd_posicion, POSICION_DATA_TAMANO, GL_FLOAT, GL_FALSE, objGLBuffer, 0);
    glEnableVertexAttribArray(_shd_posicion);
    
    glVertexAttribPointer(_shd_color, COLOR_DATA_TAMANO, GL_FLOAT, GL_FALSE,          tamano_total, (GLvoid*) (sizeof(float) * POSICION_DATA_TAMANO));
    
    
    glEnableVertexAttribArray(_shd_color);
    
    
    
    //                    SHADER VALUE          3             TIPO    NORMALIZADO?   PACK                         LOCALIZACION
    glVertexAttribPointer(_shd_textura, TEXTURA_DATA_TAMANO, GL_FLOAT, GL_FALSE, tamano_total,   (GLvoid*) (sizeof(float) * (POSICION_DATA_TAMANO + COLOR_DATA_TAMANO)));
    glEnableVertexAttribArray(_shd_textura);
    
    //glDrawArrays(GL_TRIANGLES, 0, cantidad_vertices );
    
    


}

void ZEntidadDibujable::draw(){

    
    
    
    
    
    
    
    
    
    
    //Usamos indices
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, objGLBuffer->get_vbi());
    
    glDrawElements(GL_TRIANGLE_STRIP, objGLBuffer->get_numero_vertices(), GL_UNSIGNED_SHORT, 0);
    

}








void ZEntidadDibujable::set_buffer( ZGeometriaObject *_objGLBuffer ){
    objGLBuffer = _objGLBuffer;
};

void ZEntidadDibujable::set_posicion( Posicion *_modelo ){
    modelo = _modelo;
};

void ZEntidadDibujable::set_shader( zeShader *_shader ){
    shader = _shader;
};

ZGeometriaObject*   ZEntidadDibujable::get_buffer()  {
    return objGLBuffer;
};
Posicion* ZEntidadDibujable::get_posicion(){
    return modelo;
};
zeShader* ZEntidadDibujable::get_shader()  {
    return shader;
};

