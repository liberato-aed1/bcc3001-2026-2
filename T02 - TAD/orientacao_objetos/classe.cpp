#include <iostream>
#include <string>

using namespace std;

class Conta {    
    public:

    Conta(){
        cout << "Construtor chamado" << "\n";
        this->numero = -1;
        this->nome = "";
        this->saldo = 0;
    }

    Conta(int numero){
        cout << "Construtor chamado" << "\n";
        this->numero = numero;
        this->saldo = 0;
    }

    Conta(int numero, string nome){
        cout << "Construtor chamado" << "\n";
        this->numero = numero;
        this->nome = nome;
        this->saldo = 0;
    }

    ~Conta(){
        cout << "Destrutor: " << this->numero << "\n";
    }

    int numero;
    string nome;

    private:
    double saldo;

};

void teste(){
    Conta* c2 = new Conta;
    Conta* c3 = new Conta(300, "Jose");
    Conta c4;

    (*c2).numero = 200;
    c2->nome = "Maria";

    cout << c2->numero << ": " << c2->nome << "\n";
    cout << c3->numero << ": " << c3->nome << "\n";

    delete c2;
    delete c3;
}

int main() {
    int x;
    Conta c1;
    c1.numero = 100;
    c1.nome = "Joao";
    cout << c1.numero << ": " << c1.nome << "\n";

    teste();    

}