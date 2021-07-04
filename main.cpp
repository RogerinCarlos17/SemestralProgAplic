#include <iostream>
#include <fstream>
#include <clocale>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


using namespace std;


int main(){

    float num1x,num1y,num2x,num2y,nEle;
    float numFinalx,numFinaly,numFinal;
    string OP,GL;

    
    cout << "Digite 'gravar' se voce quer gravar o numero ou 'ler' caso queira ler: ";
    cin >> GL;
    
    
    if(GL=="gravar"){

        cout << "Informe o numero de elementos que voce quer gravar: ";
        cin >> nEle;
    }
       
    cout << "Informe a operacao matematica desejada(soma,subtracao,multiplicacao,divisao,modulo): ";
    cin >> OP ;
       
       
        for(int i=0;i<nEle;i++){
    
    cout << "informe o numero x do numero complexo (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo (z=x+y.i): ";
    cin >> num1y;
    }
    
    if(OP=="soma"){

        cout << "informe o numero x do numero complexo 1 (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo 1 (z=x+y.i): ";
    cin >> num1y;

    cout << "informe o numero x do numero complexo 2 (z=x+y.i): ";
    cin >> num2x;
    cout << "informe o numero y do numero complexo 2 (z=x+y.i): ";
    cin >> num2y;

        numFinalx=num1x+num2x;
        numFinaly=num1y+num2y;
        cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";

    }

    if(OP=="subtracao"){

        cout << "informe o numero x do numero complexo 1 (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo 1 (z=x+y.i): ";
    cin >> num1y;

    cout << "informe o numero x do numero complexo 2 (z=x+y.i): ";
    cin >> num2x;
    cout << "informe o numero y do numero complexo 2 (z=x+y.i): ";
    cin >> num2y;

        numFinalx=num1x-num2x;
        numFinaly=num1y-num2y;
        cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";

    }

    if(OP=="multiplicacao"){

        cout << "informe o numero x do numero complexo 1 (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo 1 (z=x+y.i): ";
    cin >> num1y;

    cout << "informe o numero x do numero complexo 2 (z=x+y.i): ";
    cin >> num2x;
    cout << "informe o numero y do numero complexo 2 (z=x+y.i): ";
    cin >> num2y;

        numFinalx=(num1x*num2x - num1y*num2y);
        numFinaly=(num1x*num2y + num1y*num2x);
        cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";;

    }

    if(OP=="divisao"){

    cout << "informe o numero x do numero complexo 1 (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo 1 (z=x+y.i): ";
    cin >> num1y;

    cout << "informe o numero x do numero complexo 2 (z=x+y.i): ";
    cin >> num2x;
    cout << "informe o numero y do numero complexo 2 (z=x+y.i): ";
    cin >> num2y;

    numFinalx=(num1x*num2x+num1y*num2y)/(num2x*num2x+num2y*num2y);
    numFinaly=(num2x*num1y-num1x*num2y)/(num2x*num2x+num2y*num2y);
    cout << "O resultado e: "<<numFinalx<<"+("<<numFinaly<<"i)";

    }

    if(OP=="modulo"){

    cout << "informe o numero x do numero complexo (z=x+y.i): ";
    cin >> num1x;
    cout << "informe o numero y do numero complexo (z=x+y.i): ";
    cin >> num1y;



    numFinalx=sqrt(num1x*num1x+num1y*num1y);

    cout << "O resultado e: "<<numFinalx;

    }

return 0;
}
