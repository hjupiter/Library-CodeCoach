//Es un ejemplo muy sencillo de hacer una herencia simple.
//Una herencia es para aprovechar código. Al heredar los datos publicos y protegidos la sub-clase desde la superclase, esta sub-clase podra utilizar esos datos y constructores desde la clase como si los hubiera declarado dentro.
//Yo entiendo una herencia como si fuese la superclase la programacion y luego las sub-clases serian los lenguajes de programacion, es decir, C, C++, Pascal, Visual Basic...
//De esta manera cosas que tengan todos los lenguajes en común estará en la superclases y las cosas concretas de cada lenguaje estaran en las sub-clases o variantes.


#include <iostream.h> // Biblioteca para la entrada/salida de datos

main() //Comienza la funcion principal
{
  class vehiculo  //Declaramos la superclase vehiculo
  {
    protected:  //Le ponemos tipo protegido a los datos para que se pasen a la variante
              float peso; //Variable tipo decimal que guardara el peso
              int ruedas; //Variable tipo intero que guardara el nº de ruedas
    public:  //Le ponemos tipo publico a los constructores para poder utilizarlos en todo el programa
            void iniciar(float p,int r) //Este constructor se dedica a enlazar las variables del
            { //main principal con las de las clases por eso se pasan por parametros
              peso = p;  //La variable peso sera igual a la variable p
              ruedas = r;  //La variable ruedas sera igual a la variable r
            }; //Fin del constructor iniciar
            float ob_peso(void) //Constructor de tipo decimal que muestra el peso
            { return peso; }; //Devuelve el peso con return
            int ob_ruedas(void) //Constructor de tipo entero que muestra el nº de ruedas
            { return ruedas; }; //Devuelve las ruedas con return
  };  //Fin de la declaracion de la superclase vehiculo
  class motocicleta:public vehiculo //Declaramos la clase variante llamada motocicleta
  { //Hacemos que se pase todo lo protegido y publico a esta variante con :public vehiculo
    private: //Aunque por defecto si no se pone el tipo es private, pero lo ponemos
             int pasajeros;  //Variable de tipo entero que guardara el nº de pasajeros
             int combustible; //Variable de tipo entero que guardara el combustible
             char tipo; //Variable de tipo caracter que guardara una tecla
    public:  //Le ponemos tipo publico a los constructores para poder utilizarlos en todo el programa
            void iniciar(int pj,int com,int r,float p) //Este constructor se dedica a enlazar las
            { //variables del main principal con las de las clases por eso se pasan por parametros
              pasajeros = pj;  //La variable pasajeros sera igual a pj
              combustible = com;  //La variable combustible sera igual a com
              ruedas = r; //La variable ruedas sera igual a r
              peso = p; //La variable peso sera igual a p
            };  //Fin del constructor iniciar
            int ob_pasajeros(void) //Constructor tipo entero para obtener el nº de pasajeros
            { cout << endl << "Que tipo de moto es ?";  //Datos de salida
              cout << endl << "Grande: Pulse G - Chica: Pulse C\\n";  //Datos de salida
                   cin >> tipo;  //Dato de entrada hacia la variable tipo char llamada tipo
              if((tipo == 'g') || (tipo == 'G')) //Si hemos pulsado g o G
              { pasajeros=pasajeros+1; }  //pasajeros se incrementara 1
              if((tipo == 'c') || (tipo == 'C')) //Si hemos pulsado c o C
              { pasajeros=pasajeros-1; }  //pasajeros se decrementara 1
              return pasajeros;  //Devuelve con return el valor de la variable pasajeros
            };  //Fin del constructor ob_pasajeros
            int ob_combustible(void) //Constructor tipo entero para obtener el nº de combustible
            { //Se utiliza el mismo valor anterior con la variable char tipo
              if((tipo == 'g') || (tipo == 'G')) //Si habiamos pulsado g o G
              { combustible=combustible+20; }  //El valor de combustible sera 20 mas
              if((tipo == 'c') || (tipo == 'C')) //Si habiamos pulsado c o C
              { pasajeros=20; }                //El valor de combustible sera 20
              return combustible;  //Devuelve con return el valor de combustible
            };  //Fin del constructor ob_combustible
  }; //Fin de la declaracion de la clase variante motocicleta

  int r=2,pj=2,com=20; //Declaramos variables enteras:
                       //r sera el numero de ruedas
                       //pj sera el numero de pasajeros
                       //com sera el numero de combustible
  float p=96.5;  //Declaramos variables decimales:
                 //p sera el peso

  motocicleta moto;  //Declaramos una variable tipo sub-clase moticicleta llamada moto

  moto.iniciar(pj,com,r,p); //Llamamos al constructor iniciar desde moto, le pasamos los parametros
  pj=moto.ob_pasajeros(); //Asignamos el valor del constructor ob_pasajeros a pj

  cout << endl << "Caracteristicas de un ciclomotor";  //Datos de salida
  cout << endl << "Peso: " << moto.ob_peso() << "kg";  //Datos de salida, llamamos a ob_peso
  cout << endl << "Ruedas: " << moto.ob_ruedas();      //Datos de salida, llamamos a ob_ruedas
  cout << endl << "Pasajeros: " << pj;                 //Datos de salida, ponemos a mostrar pj
  cout << endl << "Combustible: " << moto.ob_combustible() << "litros"; //Datos de salida, llamamos
  cout << endl;                                                         //a ob_combustible

  cin.get();  //Limpia el buffer
  cin.get();  //Espera a que pulses una tecla
} //Fin de la funcion principal