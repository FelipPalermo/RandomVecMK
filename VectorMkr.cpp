#include <iostream>
#include <vector>
#include <time.h>
#include <string>
#include <Windows.h>

// Pvec = Print vector 
// Funcao para mostrar o vetor por base de for loops
void Pvec(std::vector<std::vector<int>> Dvector){

    // Essas proximas variaveis sao usadas como comapracao no for loop
    // Essas variaveis servem de seguranca para nunca printar nada a mais

    // Numero de colunas
    int Cc = Dvector.size();

    // Numero de casas em cada coluna
    int Cn = Dvector[0].size();


    // For loop para printar o vetor 
    for (int i = 0; i < Cc; i++){
        for (int x = 0; x < Cn; x++){
            std::cout<<Dvector[i][x]<<"  ";
        }
        std::cout<<std::endl;   }   }

std::vector<std::vector<int>> Mk_Vecs(){

    // SeedRandom = Tempo do computador (NULO)
    srand(time(NULL));

    // Vetor base para o valores serem adicionados depois
    std::vector<std::vector<int>> Auto_gen_vec = {
        {0,0,0},
        {0,0,0},
        {0,0,0} };



    for (int i = 0; i < 3; i++){
        
        // Escolhe um numero de 0 - 99
        int Rand_Num = rand() % 100;
        for (int x = 0; x < 3; x++){

            // Escolhe um numero de 0 - 99
            int Rand_Num =  rand() % 100;

            // Adiciona os numeros aleatorios para a coluna e fileira atual
            Auto_gen_vec[i][x] += Rand_Num; 
        }
    }

    // retorna o vetor 2D 
    return Auto_gen_vec; }

int main(){

    // Declarando Vetor 2D 
    std::vector<std::vector<int>> i = {
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    
    // Vetor de Char para usarmos as letras 
    char Rand_char[] = {"abcdefghijklmnopqrstuvwxyz"};
    
    // Definindo string
    std::string SC;

    

    for (int i = 0; i < 10; i++){
        
        
        srand(time(NULL));
        // Seleciona um numero 0 - 25 
        int Select_Char = rand() % 26; 

        // Transforma esse numero em uma letra Char para usarmos como variavel
        char T_char = Rand_char[Select_Char];

        // Converte Char em String
        SC += T_char;

        // Cria um vetor 2D usando a letra escolhida como nome da variavel
        std::vector<std::vector<int>> SC = Mk_Vecs();

    
        // Executa a variavel dentro do Pvec para mostrar o vetor
        Pvec(SC);
        Sleep(300);
    }

    return 0;
}