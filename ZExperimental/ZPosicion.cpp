//
//  ZPosicion.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZPosicion.h"


Posicion::Posicion(){

    modelo = mat4(1.0f);

}

void Posicion::set_posicion(float x, float y, float z){

    modelo = translate(modelo, vec3( x,y,z ) );
    
}


mat4 Posicion::get_modelo(){
    
    return modelo;
}