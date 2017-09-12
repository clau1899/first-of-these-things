#include <iostream>
//#include <string>

using namespace std;

//PROBLEMA 1: FOR RECURSIVO:
int funcionfor(int x, int i=0)
{
    if(i==x)//si el contador es igual al numero limite entonces paramos
        return 0;
    else{
        cout<<i<<endl;//de lo contrario imprimos el contador
        return funcionfor(x,++i);//llamamos la funcion incrementado en 1 el contador
    }
}

//PROBLEMA 2: NUMEROS PRIMOS (recursivo):
bool numeroPrimo(int x, int y)//este funcion retornara un booleano v o f
{
    if (x%y==0 && x!=2)//caso base1:si el numero que ingresamos es divisible exactamente entre los valores que ira tomando y ese num es diferente de 0 entonces no es primo
        return false;
    else if (y>x/2)//caso base2: pero si el numero que usaremos para dividir es mayor que la mitad del numero que ingresamos entonces el numero es primo; porque solo es necesario verificar con la mitad
        return true;
    else
        return numeroPrimo(x,++y);//para poder dividir entre los sgtes numeros aumentamos nuestro divisor en 1 a cada vuelta
}
//PROBLEMA 3: NUMEROS ASCENDENTE Y DESCENDENTE:
int imprimeAyD(int x)
{
    cout<<"ingresa numero para imprimir de manera ascendente y descendente"<<endl;//pedimos el numero al usuario
    cin>>x;//lo almacenamos en x
    cout<<"Ascendente:"<<endl;
    for (int i=0;i<=x;i++){//iniciamos en 0 y aumentamos en 1 cada vuelta y terminamos cuando nuestro contador sea igual al numero del usuario
        cout<<i<<endl;//imprimimos i para ver como sube en i a cada iteracion
    }
    cout<<"Descendente:"<<endl;//iniciamos en el numero del usuario y vamos disminuyendo 1 a cada vuelta hasta llegar a 0
    for (int i=x;i>=0;i--){
        cout<<i<<endl;//imprimimos i para ver como baja en i a cada iteracion
    }
}
//PROBLEMA 4: EXPRESION LOGICA:
int expresionLogica(string exp)
{
    string expresion="ABCD()&|^~";//tenemos el string que contiene los caracteres que la exp ingresada por el usuario debe contener
    cout<<"------"<<endl;
    /*for (int i=0;i<10;i++){
        cout<<expresion[i]<<endl;
    }*/
    cout<<"Ingrese la expresion Logica"<<endl;//pedimos al usuario que ingrese su exp logica
    cin>>exp;//se almacena en exp
    for (int i=0;i<10;i++){//para imprimir cada caracter de la exp ingresada por el usuario
        cout<<exp[i]<<endl;
    }

    for (int i=0;i<15;i++){//el numero max de caract que puede tener la exp es 15
        if (exp[i]==expresion[3]){//si en la exp tenemos la variable d, significa que trabajaremos con 4 variables, cada una con 2^4 valores
            exp[i]=43690;

            int nuevaExpresion[]={65280,61680,52428,43690};
            int a=65280;//en binario es 1111111100000000
            expresion[0]=a;
            cout<<expresion[0]<<endl;
            int b=61680;
            expresion[1]=b;
            int c=52428;
            expresion[2]=c;
            int d=43690;
            expresion[3]=d;
            if (exp[i]==expresion[9]){
                exp[i+1]=~nuevaExpresion[];
                cout<<~exp[i+1]<<endl;
            }

        }


    }
    /*for (int i =0;i<t;i++){
        if (exp[i]!= "A"||"B"||"C"||"D"||"("||")"||"&"||"|"||"^"||"~"){
            cout<<"LA EXPRESION ES INCORRECTA"<<endl;
        }
    }*/

}


int main()
{
    funcionfor(10);

    int numero;
    cout<<"ingresa el numero para determinar si es primo o no"<<endl;
    cin>>numero;
    if (numeroPrimo(numero,2))
        cout<<"el numero es primo"<<endl;
    else
        cout<<"el numero no es primo"<<endl;

    imprimeAyD(10);

    expresionLogica("hola");

    /*string p;
    cout<<"ingresa exp"<<endl;
    cin>>p;
    int len=sizeof(p);
    for (int i=0;i<=len;i++){

        cout<<p[i]<<endl;
    }*/

    /*int convertir(string , int);
    {

        string y;
        cout<<"ingrese el caracter"<<endl;
        cin>>y;
        int z=y;
        cout << "The character '" << y << "' has an ASCII code of " << z << endl;
        char q;
        cout<<"ingrese el caracter"<<endl;
        cin>>q;
        int e=q;
        cout << "The character '" << q << "' has an ASCII code of " << e << endl;

        return 0;

    }*/
    /*int list1[t];
    int list2[t];
    int list3[t];
    int list4[t];*/



    return 0;
}



