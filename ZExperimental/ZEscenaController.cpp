//
//  ZEscenaController.cpp
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#include "ZEscenaController.h"


EscenaController::EscenaController(): _shader(SHADER, PATH), cubo( &_shader ){


    _camara.SetupProjection();
    
    _camara.Walk( 0.0f );
    _camara.Strafe( 0.0f );
    


}

void EscenaController::draw(){

    cubo.draw();

}


void EscenaController::update(){
   
    _camara.Update();
    cubo.get_dibujable()->set_camara( &_camara );
 
    
    cubo.update();
    
}