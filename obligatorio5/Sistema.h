#ifndef SISTEMA_H
#define SISTEMA_H
#include <iostream>
#include "DtFecha.h"

class Sistema { /* Patron Singleton */
    
    private:
        
        DtFecha fecha;
        
        static Sistema* sis;
        Sistema();
        void setFecha(DtFecha);
        
    public:
  
        DtFecha getFecha() const;
        void modificarFecha();
        
        static Sistema* getInstance();
        ~Sistema();
        
};

#endif /* SISTEMA_H */