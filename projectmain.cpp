#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

void CadastrarUsuario(std::vector<std::string> &usuarios);
 void ExibirLista(const std::vector<std::string> &usuarios);
  int main() {
   std::vector<std::string> usuarios;
    int opcao_desejada;
   bool continuar = true;
  cout << "Bem vindo ao sistema de cadastro de usuario\n";
  while (continuar) {
cout << "\nMenu de opções:";
cout << "\n1. Cadastrar usuario";
cout << "\n2. Exibir lista";
cout << "\n3. Sair do sistema";
cout << "\nDigite a opção desejada: ";
cin >> opcao_desejada;
switch (opcao_desejada) {
case 1:
CadastrarUsuario(usuarios);
break;
case 2:
ExibirLista(usuarios);
break;
case 3:
cout << "Saindo do sistema\n";
continuar = false;
break;
default:
cout << "Opção inválida. Por favor, escolha uma opção válida.\n";
break;
  }
}
return 0;
  }
void CadastrarUsuario(std::vector<std::string> &usuarios) {
string usuario;
cout << "Insira o nome do usuário: ";
cin >> usuario;
usuarios.push_back(usuario);
cout << "Usuário cadastrado com sucesso!\n";
   }
void ExibirLista(const std::vector<std::string> &usuarios) {
std::cout << "\nLista de usuários:\n";
for (const auto &usuario : usuarios) {
std::cout << usuario << std::endl;
}
}