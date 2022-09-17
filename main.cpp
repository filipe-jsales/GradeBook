
#include "GradeBook.cpp"
#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
 
   cout << "Usando sobrecarga e parametros default.\n\n";

   GradeBook gradebook0( "Biology", 3 );
   GradeBook gradebook1( "Math" );
   const GradeBook GRADEBOOK2( "Physics", 2 );

   GradeBook gradebook3( "Geography", 10 );
   GradeBook gradebook4( 3 );
   const GradeBook GRADEBOOK5( GRADEBOOK2 );
   GradeBook gradebook6( "English", 10 );

   gradebook3.setQuantidadeSalaDeAula(2);
   gradebook3.setCoordinatorName("Vinicius");
   gradebook3.setIsFull( false );
   cout << "\nDuas versoes do metodo displayMessage: const e nao const\n";
   gradebook0.displayMessage( );
   gradebook1.displayMessage( );
   GRADEBOOK2.displayMessage( );
   GRADEBOOK5.displayMessage( );
   gradebook3.displayMessage( );//Objects não const podem usar métodos const
   gradebook6.displayMessage( );
   gradebook6.showWarning("Aviso a todos os estudantes!");
   //ERROR: tentando usar método não const
   //GRADEBOOK5.setNumAlunos( 10 );

   //Variável pertence a classe
   cout << "\nTestando atributos statics.\n";
   cout << "Alunos que conseguiram vaga na escola " << gradebook3.getnumAlunosEscola( ) << '\n';
   gradebook3.expulsarAluno( ); //-1 aluno
   cout << "Alunos que conseguiram vaga na escola " << gradebook3.getnumAlunosEscola( ) << '\n';
   cout << "Numero de GradeBooks instanciados: " << gradebook3.getnumGradeBooks( ) << '\n';
   cout << "Nome do coordenador: " << gradebook3.getCoordinatorName( ) << '\n';
   cout << "Sala cheia? " << gradebook3.getIsFull( ) << '\n';
   cout << "Quantidade maxima de salas de aula: " << gradebook3.getMAXQUANTIDADESALASDEAULA( ) << '\n';
   cout << "Quantidade de salas de aula cadastradas: " << gradebook3.getQuantidadeSalaDeAula( ) << '\n';
   cout << "Numero de GradeBooks instanciados: " << gradebook0.getnumGradeBooks( ) << '\n';
   
   return 0;
}