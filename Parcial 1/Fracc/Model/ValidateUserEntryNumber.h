#ifndef _VALIDATEUSERENTRYNUMBER_H
#define _VALIDATEUSERENTRYNUMBER_H

#include <iostream>

using namespace std;

bool esEntero(string entrada){
    for(int i = 0; i<entrada.size(); i++){
        if((entrada[i]-'0')<'0'|| entrada[i]-'0'>'9'){
            return false;
        }
    }
    return true;
};



#endif //_VALIDATIONUSERENTRYNUMBER_H