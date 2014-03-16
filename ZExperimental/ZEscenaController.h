//
//  ZEscenaController.h
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZExperimental__ZEscenaController__
#define __ZExperimental__ZEscenaController__

#include <iostream>
#include "zeShader.h"
#include "CFreeCamara.h"
#include "ZCube.h"
#include "ZPintadoController.h"


#define PATH "/Users/cesarvr/Desktop/GameErr9E/Proyectos/ZExperimental/shader/"
#define SHADER "prueba"



class EscenaController {
private:
    zeShader _shader;
    CFreeCamera _camara;
    Pintado pintado;
    ZCubo cubo;
    
public:
    EscenaController();

    void teclado();
    void draw();
    void update();



};



#endif /* defined(__ZExperimental__ZEscenaController__) */
