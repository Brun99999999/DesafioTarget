#include <iostream>

double SP = 67836.43;
double RJ = 36678.66;
double MG = 29229.88;
double ES = 27165.48;
double Outros = 19849.53;

int main(){
    double faturamentoMensal = SP+RJ+MG+ES+Outros;
    std::cout<<"Contribuição por Estado:\n";
    std::cout<<"SP: "<<((SP*100.00)/faturamentoMensal)<<"%\n";
    std::cout<<"RJ: "<<((RJ*100.00)/faturamentoMensal)<<"%\n";
    std::cout<<"MG: "<<((MG*100.00)/faturamentoMensal)<<"%\n";
    std::cout<<"ES: "<<((ES*100.00)/faturamentoMensal)<<"%\n";
    return 0;
}
