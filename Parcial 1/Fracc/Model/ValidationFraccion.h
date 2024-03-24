/**
 * Project Untitled
 */


#ifndef _VALIDATIONFRACCION_H
#define _VALIDATIONFRACCION_H

#include "Fraccion.h"
class ValidationFraccion {
public: 
    
    /**
     * @param fraccion
     */
    bool isValidFraccion(Fraccion& fraccion);
        
    /**
     * @param fraccion
     */
    Fraccion simplifyFraccion(Fraccion& fraccion);
        
    /**
     * @param fraccion
     */
    bool equalFraccion(Fraccion& fraccionOne, Fraccion& fraccionTwo);
};

#endif //_VALIDATIONFRACCION_H