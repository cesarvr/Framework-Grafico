//
//  ZPintadoController.h
//  ZExperimental
//
//  Created by Cesar Luis Valdez on 15/03/14.
//  Copyright (c) 2014 Cesar Luis Valdez. All rights reserved.
//

#ifndef __ZExperimental__ZPintadoController__
#define __ZExperimental__ZPintadoController__

#include <iostream>
#include "ZEntidadDibujable.h"
#include  "CFreeCamara.h"
#include <vector>

using namespace std;

class Pintado {

    vector <ZEntidadDibujable *> lista_entidades;
    CFreeCamera *camara;
    
    
public:
    
    
    void add_entidad_dibujable( ZEntidadDibujable * _entidad );
    
    void set_camara(CFreeCamera *_camara){ camara = _camara; };
    void update(  );
    void draw(  );
    
    
};



#endif /* defined(__ZExperimental__ZPintadoController__) */
