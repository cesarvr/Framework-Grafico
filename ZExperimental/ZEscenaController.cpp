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
    
    
    
    pintado.add_entidad_dibujable( cubo.get_dibujable() );
    


}

void EscenaController::draw(){




    pintado.draw();


}


void EscenaController::update(){


    pintado.update();

}