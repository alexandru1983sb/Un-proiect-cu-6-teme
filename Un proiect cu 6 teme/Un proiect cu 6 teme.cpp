// Un proiect cu 6 teme.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  1 Numaratoare inversa pentru lansare.
//  2 Suma primelor N numere naturale.
//  3 Afisarea pattern-urilor.
//  4 Gasirea celui mai mare divizor comun.
//  5 Verificarea unui numar prim.
//  6 Convertirea unui numar din baza 10 in baza 2.


#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

void lansare_racheta();
void Suma_primelor_N_numere_naturale();
void Afisarea_pattern_urilor();
void Gasirea_celui_mai_mare_divizor_comun();
void Verificarea_unui_numar_prim();
void Convertirea_unui_numar_din_baza_10_in_baza_2();
int meniu_derulativ = 0;

bool numarPrim(int numar) // Functia returneaza doar true sau false - pentru ca nu avem nevoie de alte valori
{
    if (numar < 2) // Daca numarul este mai mic ca si 2 (1, 0, -1, -2, etc) - acesta nu este prim
        return false;
    if (numar == 2) // Daca numarul este 2, acesta este prim
        return true;
    for (int i = 2; i <= numar / 2; i++) // Parcurgem toate numerele de la 2 la numar / 2
        if (numar % i == 0) // Daca acesta se imparte exact la acel numar, inseamna ca nu este prim
            return false;
    return true;
}



int main()
{
    if (meniu_derulativ == 0) {
        std::cout << "          Alegeti tema dorita.\n\n\n";
        std::cout << "  1 Numaratoare inversa pentru lansare.\n";
        std::cout << "  2 Suma primelor N numere naturale.\n";
        std::cout << "  3 Afisarea pattern-urilor.\n";
        std::cout << "  4 Gasirea celui mai mare divizor comun.\n";
        std::cout << "  5 Verificarea unui numar prim.\n";
        std::cout << "  6 Convertirea unui numar din baza 10 in baza 2.\n\n\n";
        std::cout << "Alege tema : ";
        std::cin >> meniu_derulativ;
        std::cout << "\n";
        switch (meniu_derulativ)
        {
        case 1: meniu_derulativ = 1; break;
        case 2: meniu_derulativ = 2; break;
        case 3: meniu_derulativ = 3; break;
        case 4: meniu_derulativ = 4; break;
        case 5: meniu_derulativ = 5; break;
        case 6: meniu_derulativ = 6; break;
        default:
            meniu_derulativ = 0; break;
            main();
            break;
        }
    }

    lansare_racheta();
    Suma_primelor_N_numere_naturale();
    Afisarea_pattern_urilor();
    Gasirea_celui_mai_mare_divizor_comun();
    Verificarea_unui_numar_prim();
    Convertirea_unui_numar_din_baza_10_in_baza_2();
}


void lansare_racheta() {
    int timp_lansare = 10;
    if (meniu_derulativ == 1) {
        std::cout << "Numaratoare inversa pentru lansare.\n";
        std::cout << "Bucla for.\n\n\n";
        std::cout << "Racheta se va lansa in : ";
        std::cout << timp_lansare;
        std::cout << " secunde\n\n\n";

        for (timp_lansare; timp_lansare > 0; timp_lansare--) {
            std::cout << "Racheta se va lansa in : ";
            std::cout << timp_lansare;
            std::cout << " \n";
            Sleep(1000);
            if (timp_lansare == 1) {
                system("CLS");
                std::cout << " \n\n\n";
                std::cout << " Lansare";
                std::cout << " \n\n\n\n";
            }
        }
        Sleep(5000);
        system("CLS");
        std::cout << "\n";
        meniu_derulativ = 0;
        main();
    }
}

void Suma_primelor_N_numere_naturale() {

    int numar_de_la_tastatura = 0;
    int rezultat = 1;
    int i = 0;
    if (meniu_derulativ == 2) {
        std::cout << "Suma primelor N numere naturale.\n";
        std::cout << "Bucla for.\n\n\n";
        std::cout << "Adaugati de la tastatura un numar : ";
        std::cin >> numar_de_la_tastatura;
        std::cout << " \n\n\n";
        std::cout << "Numarul adaugat de dumneavoastra este : ";
        std::cout << numar_de_la_tastatura;
        std::cout << " \n";
        for (i = numar_de_la_tastatura; i > 0; i--) {
            if (numar_de_la_tastatura != 0) {
                std::cout << numar_de_la_tastatura;
                std::cout << " ";
                if (numar_de_la_tastatura == 1) {
                    std::cout << "= ";
                    std::cout << rezultat;
                    std::cout << " \n";
                    std::cout << "Suma numerelor este = ";
                    std::cout << rezultat;
                    std::cout << " \n\n\n";
                }
                else {
                    std::cout << "+ ";
                    numar_de_la_tastatura = numar_de_la_tastatura - 1;
                    rezultat = rezultat + i;
                }
            }
        }
        Sleep(5000);
        system("CLS");
        std::cout << "\n";
        meniu_derulativ = 0;
        main();
    }
}

// De asezat stelutele
void Afisarea_pattern_urilor() {
    int numar_introdus_de_utilizator = 0;
    int i = 0;
    int cnt = 0;
    std::string steluta = "*";
    if (meniu_derulativ == 3) {
        std::cout << "Afisarea pattern-urilor.\n";
        std::cout << "Bucla for.\n\n\n";
        std::cout << "Adaugati de la tastatura un numar : ";
        std::cin >> numar_introdus_de_utilizator;
        for (i = numar_introdus_de_utilizator; i > 0; i--) {
            std::cout << "\n";
            cnt = numar_introdus_de_utilizator - i;
            cnt = cnt + 1;
            for (cnt; cnt > 0; cnt--) {
                std::cout << "\t";
                std::cout << steluta;
            }
        }
        Sleep(5000);
        system("CLS");
        std::cout << "\n";
        meniu_derulativ = 0;
        main();
    }
}

// Nu am inteles
void Gasirea_celui_mai_mare_divizor_comun() {
    int numar_1 = 0, numar_2 = 0, rezultat = 0;
    if (meniu_derulativ == 4) {
        std::cout << "Gasirea celui mai mare divizor comun.\n";
        std::cout << "Folosim algoritmul lui Euclid.\n\n\n";
        std::cout << "Adaugati primul numar : ";
        std::cin >> numar_1;
        std::cout << "\n";
        std::cout << "Adaugati al doilea numar : ";
        std::cin >> numar_2;
        while (numar_2) {
            rezultat = numar_1 % numar_2;
            numar_1 = numar_2;
            numar_2 = rezultat;
            std::cout << rezultat;
        }
        Sleep(5000);
        system("CLS");
        std::cout << "\n";
        meniu_derulativ = 0;
        main();
    }
}

void Verificarea_unui_numar_prim() {
    int numar = 0, rezultat = 0, temp = 2;
    std::string numar_compus = "Numar compus.";
    std::string numar_prim = "Numar prim.";
    if (meniu_derulativ == 5) {
        std::cout << "Verificarea unui numar prim.\n";
        std::cout << "Adaugati de la tastatura un numar : ";
        std::cin >> numar;

        if (numarPrim(numar) == true) {
            std::cout << "Numarul este Prim\n";
        }
        else std::cout << "Numarul este Compus.\n";
        std::cout << "" << std::endl;

        Sleep(5000);
        system("CLS");
        std::cout << "\n";
        meniu_derulativ = 0;
        main();
    }

}
void Convertirea_unui_numar_din_baza_10_in_baza_2() {
    if (meniu_derulativ == 6) {
        std::cout << "Convertirea unui numar din baza 10 in baza 2.\n";
        std::cout << "Adaugati de la tastatura un numar : ";
        //Declarăm și citim numărul în baza 10
        int numar;
        std::cin >> numar;
        std::cout << "\n\n";
        int raspuns = 0, p = 1; //Calculăm și afișăm numărul în baza 2
        while (numar > 0) {
            int restul_impartirii = numar % 2; //Cifra curentă, care este defapt restul împărțirii la 2
            raspuns += p * restul_impartirii; //Adăugăm cifra curentă la raspuns
            p = p * 10; //Formăm puterea următoare
            numar = numar / 2; //Îl înmulțim pe n la 2 pentru a găsi următoarele cifre
        }
        std::cout << "Numarul este : ";
        std::cout << raspuns;
        std::cout << "\n\n";

        Sleep(5000);
        system("CLS");
        std::cout << "\n";
        meniu_derulativ = 0;
        main();
    }
}