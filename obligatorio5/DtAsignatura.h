#ifndef DTASIGNATURA_H
#define DTASIGNATURA_H
#include <string>
#include <iostream>

using namespace std;

class DtAsignatura {
    private:

	int codigo;
	string nombre;
	int creditos;

    public:

	DtAsignatura();
	DtAsignatura(const DtAsignatura&);
	DtAsignatura(int,string,int);

	int getCodigo() const;
	string getNombre() const;
	int getCreditos() const;

        friend ostream& operator << (ostream&, DtAsignatura&);
        bool operator() (const DtAsignatura&)const;

	virtual ~DtAsignatura();
};

#endif /* DTASIGNATURA_H */