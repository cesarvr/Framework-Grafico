//
//  ZPintadoController.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZPintadoController.h"



void Pintado::add_entidad_dibujable(ZEntidadDibujable *_entidad){
    
    lista_entidades.push_back( _entidad );

}


void Pintado::update(){
    
  //  for (ZEntidadDibujable *entidad: lista_entidades) {
        
        
   // }


}

void Pintado::draw(){
    
    for (ZEntidadDibujable *entidad: lista_entidades) {
        
        //Usamos indices
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, entidad->get_buffer()->get_vbi());
        
        glDrawElements(GL_TRIANGLE_STRIP, entidad->get_buffer()->get_numero_vertices(), GL_UNSIGNED_SHORT, 0);
        

        
    }
    
  
}