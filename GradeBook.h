#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( string , int = 0 );
    GradeBook( int );
    GradeBook( const GradeBook & );
    
    void setCourseName( string );
    void setCoordinatorName( string );
    void showWarning( const string & );

    void setNumAlunos( int );
    void setQuantidadeSalaDeAula( int );
    string getCourseName( );
    string getCoordinatorName( ) const ;
    static int getMAXQUANTIDADESALASDEAULA( );

    bool getIsFull( ) const;
    void setIsFull( bool ) ;

    void displayMessage( bool = true ) const;
    void displayMessage( bool = true );
    static void expulsarAluno();

    inline int getnumGradeBooks( ) const { return numGradeBooks; }
    inline int getQuantidadeSalaDeAula( ) const { return quantidadeSalaDeAula; }
    inline int getnumAlunosEscola( ) const { return numAlunosEscola; }

private:

    string courseName;
    string coordinatorName;
    bool isFull;
    int numAlunos;
    const int MAXSIZENAME;
    bool check;
    static int numGradeBooks;
    //Error check. Static não pode instanciar no .h
    //static int numGradeBooks = 0;

    static int numAlunosEscola;
    static int quantidadeSalaDeAula;

    //Pode inicializar aqui ou no cpp
    //const static int MAXNUMALUNOSESCOLA = 100;
    const static int MAXNUMALUNOSESCOLA;
    const static int MAXQUANTIDADESALASDEAULA;
};

#endif // GRADEBOOK_H