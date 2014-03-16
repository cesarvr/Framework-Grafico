//
//  ZCube.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZCube.h"


ZCubo::ZCubo( zeShader *_shader ){

    
    dibujable.set_shader( _shader );
    
    

    float vertices[] = {
                            -0.5f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f,
                             1.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f,
                            -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
                             1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f,
    };
    
    unsigned short indices[] = {1,2,3,4};
    
    
    dibujable.get_buffer()->set_vertices( vertices, sizeof(vertices) );
    dibujable.get_buffer()->set_indices(  indices,  sizeof(indices)  );
    
    
    
};


void ZCubo::update(){
    
    dibujable.get_posicion()->set_posicion(0, 0, 0);
    
}