#ifndef DTFECHA_H
#define DTFECHA_H
#include <string>
#include <iostream>

using namespace std;

class DtFecha {
    
    private:
        
	int dia;
	int mes;
	int anio;

    public:
    
	DtFecha();
	DtFecha(const DtFecha&);
	DtFecha(const int, const int, const int);

        int getAnio() const;
        int getDia() const;
        int getMes() const;
        
        bool operator==(const DtFecha&) const;
        bool operator>(const DtFecha &Fecha) const;
        friend ostream& operator << (ostream&, DtFecha&);

        virtual ~DtFecha();
};

#endif /* DTFECHA_H */