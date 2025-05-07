//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Programação Computadores                                                                                                              │
//└=======================================================================================================================================┘
//= Computadores são equipamentos eletrônicos destinados ao processamento dos mais variados tipos de informações:
//= Números 21 49582 039 384 28 2938
//= Texto "aprenda a programar computadores!"
//= Sons e Imagens
//
//===== Computadores executam diversas tarefas: ==========================================================================================
//= Solução de problemas matemáticos, Achar raízes de uma função, Calcular derivadas e integrais
//= Controle de processos industriais
//= Execução remota de cirurgias
//= Previsão de condições climáticas
//= Controle acadêmico de uma universidade
//= Controle de robôs
//= Jogos e simulações
//= Um jogo possui um grande número de sistemas computacionais:
//= renderização, colisão, partículas, animação, IA, áudio, rede, física, entrada (controle ou mouse e teclado), localização.
//
//===== Como um mesmo dispositivo eletrônico executa trabalhos de natureza tão diversas ? ================================================
//= Um telefone faz e recebe chamadas de voz
//= Um aparelho de DVD reproduz filmes
//= Um microondas cozinha alimentos
//= Ao contrário da maioria dos dispositivos eletrônicos, o computador pode ser programado para executar qualquer tarefa. 
//
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Como programar um computador?                                                                                                         │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//= "Um programa é uma sequência de instruções que, ao serem executadas pelo computador, realizam uma determinada tarefa."
//= É como uma receita de bolo. Os Dados são os ingredientes. E as instruções são o preparo.
//  
//===== Um programa simples em uma linguagem de programação ==============================================================================
//= Dados: os valores 10 e 20
//= Instruções: soma, atribuição e exibição
//= Alterando os dados, ou as instruções, produzimos um resultado diferente.
//========================================================================================================================================
/*
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int c = a + b;
    cout << "A soma dos valores: " << c << endl;
    return 0;
}
*/
//===== Como criar um programa ? =========================================================================================================
//= O computador não reconhece a linguagem natural utilizada na receita de bolo
//= O computador só executa instruções em linguagem de máquina
//= 
//===== Conjunto de Instruções de 32 bits ================================================================================================ 
//= 01010111101011010101011101101101
//= 01010101010111101110101011011010
//= 11011101010101101010101010101010
//= 10101010101010101010101101111011
//= 00110111011101101110111011101110
//= 11101111011110000001111000011111
//= 11010101010101010100000000111111
//= 11010101011111110101010001101110
//=


//= Um programa de computador é primeiramente carregado na memória do computador(usualmente pelo sistema operacional).
//= O sistema operacional organiza três blocos de memória, também chamados segmentos.

//= O primeiro é o segmento de código, que é estático em tamanho e em conteúdo.
//= Ele recebe todo o código de máquina que define as sub rotinas do programa, 
//= e o endereço de cada sub rotina é definido como o menor dos endereços das células de memória que a definem.

//= O segundo bloco de memória é o segmento de dados, e recebe as variáveis globais.
//= Assim como no segmento de código, o endereço de cada variável é definido como o menor dos endereços das células de memória que o definem.
//= Ele é estático em tamanho mas dinâmico em conteúdo, o que significa que este segmento não pode criar variáveis em tempo de execução, 
//= mas o conteúdo é variável, pode ser modificado.

//= O terceiro bloco de memória é o segmento de pilha, uma área de memória na qual armazena-se informação em forma de uma pilha.
//= Ele serve para armazenar informações como variáveis locais, parâmetros de sub rotinas e endereços de retorno
//= (para onde o fluxo do programa deve ir após a execução de uma função, isto é, a posição da instrução seguinte à chamada da função.). 
//= Antes da execução do programa propriamente dita, a pilha é esvaziada.


//===== Assembly =========================================================================================================================
//= Ninguém escreve programas em linguagem de máquina
//= A primeira linguagem utilizada para construir programas foi a linguagem Assembly
//= Assembly é uma linguagem de baixo nível
//= Manipula as informações no nível de registradores da CPU e endereços de memória
//= Depende da arquitetura da máquina:  x86/x64 (CISC), ARM (RISC)
//========================================================================================================================================
/*
{calcula a soma 10 + 20}
asm
    mov eax,10
    add eax,20
end; 
 
{A rotina a seguir exibe uma palavra}
procedure imprime_nts; assembler;
asm
    push  ax
    push  si
    jmp   @primeiro_char
@imprime:
    call  imprime_char
    inc   si{ aponta para o próximo caractere }
@primeiro_char :
    mov   al, [si]
    cmp   al, 0        {string acabou ? }
    jne   @imprime{ se não, imprime o caractere }
    pop   si
    pop   ax
end;
*/
//==== Linguagens alto nivel =============================================================================================================
//= Linguagens de baixo nível não são adequadas para a programação de grandes sistemas comerciais
//= Para isso utilizam-se linguagens de alto nível
//= Por exemplo: C, C++, Objective-C, C#, Java, Python
//= 
//==== As instruções em linguagem de alto nível são traduzidas ===========================================================================
//= cout << "Bem vindo a programação com C++";
//= 01010111101011010101011101101101
//= 01010101010111101110101011011010
//========================================================================================================================================
//
//==== Linguagens não estruturadas =======================================================================================================
//= As primeiras linguagens de alto nível são hoje classificadas como linguagens não - estruturadas
//= Não há um mecanismo para agrupar instruções
//= Conjunto muito extenso de instruções
//= Muito difícil acompanhar a execução
//= Caracterizadas pelo uso da instrução GOTO
//= Exemplo: BASIC, FORTRAN
//========================================================================================================================================
// Exemplo de Programa em BASIC:
/*
10  REM RESOLVE EQUACAO DO SEGUNDO GRAU
20  READ A,B,C
25  IF A=0 THEN GOTO 410
30  LET D=B*B-4*A*C
40  IF D<0 THEN GOTO 430
50  PRINT "SOLUCAO"
60  IF D=0 THEN GOTO 100
70  PRINT "PRIMEIRA SOLUCAO",(-B+SQR(D))/(2*A)
80  PRINT "SEGUNDA SOLUCAO",(-B-SQR(D))/(2*A)
90  GOTO 20
100 PRINT "SOLUCAO UNICA",(-B)/(2*A)
200 GOTO 20
410 PRINT "A DEVE SER DIFERENTE DE ZERO"
420 GOTO 20
430 PRINT "NAO HA SOLUCOES REAIS"
440 GOTO 20
490 DATA 10,20,1241,123,22,-1
500 END
*/
//==== Linguagens estruturadas ===========================================================================================================
//= A segunda geração de linguagens são conhecidas como linguagens estruturadas
//= Foi introduzido o conceito de sub-rotina
//= As instruções podem ser agrupadas
//= Uma sub-rotinas pode chamar outra
//= Muito mais fácil acompanhar a execução
//= Possibilita o reuso de código
//= Exemplo: Pascal, C
//========================================================================================================================================
//= Exemplo de Programa em Pascal:
/*
program Maximum;
var
    a, b, ret : integer;

function max(num1, num2: integer): integer;
var
    result: integer;
begin
    if (num1 > num2)
    then result := num1;
    else result := num2;
    max := result;
end;

begin
    a := 100; b := 200;
    ret := max(a, b);
    writeln('Max value is : ', ret);
end.
*/
//==== Linguagens orientadas a objeto ====================================================================================================
//= A terceira geração de linguagens são as linguagens orientadas a objeto
//= A mais usada nos dias de hoje
//= Atrela as sub-rotinas a um conjunto de dados
//= Expande ainda mais as opções de reuso de código
//= Trata os problemas de forma mais intuitiva
//= Facilita o tratamento de erros
//= Exemplo: C++, C#, Java, Python
//========================================================================================================================================
//= Exemplo de Programa em C++: controla ações da bolsa de valores
/*
#include <iostream>

class Acoes
{
private:
    char empresa[40];
    int quantidade;
    double valor;

public:
    void adquirir(const char* companhia, int quant, double preco);
    void comprar(int quant, double preco);
    void vender(int quant, double preco);
    void atualizar(double preco);
    void mostrar();
};
*/
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ O que é necessário saber para programar ?                                                                                             │
//└=======================================================================================================================================┘
//= Usar um editor de código e um compilador
//= Saber lógica de programação
//==== Conhecer uma linguagem:  ==========================================================================================================
//= Representação de dados (int, float, char, etc.)
//= Entrada e saída de dados (printf, cout, writeln, etc.)
//= Processar dados (+, -, *, >, <, <=, &&, ||, !, etc.)
//= Desvio e repetição (if, switch, for, while, etc.)
//= Declarar e chamar funções (bibliotecas ou criadas)
//= Manipulação de arquivos (texto e binário)
// 
//==== linguagem C++ =====================================================================================================================
//= Aprenderemos a programar usando a linguagem C++
//= Existem diversos compiladores para C++:
//= Microsoft Visual C++
//= Clang
//= GNU g++
//= Intel C++
//= Compilador é diferente de IDE
//= O Visual Studio utiliza o compilador Visual C++
// 
//==== Por que C++ ? =====================================================================================================================
//= C++ é rei no Desempenho/$dolar
//= Desempenho / Energia: importante em todas as escalas – embarcado, mobile, desktop, datacenter
//= Desempenho / Tamanho: a quantidade de transistores é limitada pelo tamanho do dispositivo e pela tecnologia
//= Desempenho / Ciclo: experiências interativas melhores em hardware menor – cada ciclo conta
// 
//==== Datacenter ========================================================================================================================
//= Custo mensal 88% do custo está relacionado ao desempenho dos programas
//= 57% Servidores 
//= 8% Equipamentos de rede
//= 18% Energia e Resfriamento
//= 13% Energia
//= 1% Outros
// 
//==== Smartphones =======================================================================================================================
//= Que linguagens são suportadas para o desenvolvimento em smartphones?
//= Versão 1: Android JAVA, Windows Phone .NET, C++ 
//= Versão 2+: iPhone (Objective-C C & C++), Android (Java, C & C++), Windows Phone (.NET, C++)
// 
//==== Eficiência de C++ =================================================================================================================
//= loop recognition in C++ / JAVA / Go / Scala
//= Fontes: Robert Hundt, google, 1600 Amphitthratre Parkway, Montain View CA 94043  
//= Benchmark           Time[sec]   Factor 
//= C++ Opt             23          1.0x 
//= C++ Dbg             197         8.6x
//= Java 64-bit         134         5.8x
//= Java 32-bit         290         12.6x
//= Java 32-bit SPEC GC 82          3.7x 
//= GO Pro*             126         5.5x
//= Scala               82          3.6x
//= Scala low-level GC* 58          2.5x
// 
//****************************************************************************************************************************************
//==== O mundo é construído em C/C++ =====================================================================================================
//= Windows, HP-UX, Blackberry, ChromeOS, Linux, Solaris, iPad OS, Symbian, iPhone, iPod
//= Visual C++, Visual C#, Visual Basic, gcc, PHP, Perl
//= Windows UI, Gnome, MacOS UI, KDE
//= Google, Paypal, Facebook, Amazon, 
//= Internet Explorer, Firefox, Safari, Opera, Chrome
//= DirectX, Games, OGRE 3D, OpenGL, Garmin
//= Photoshop, The GIMP, MS Office, Corel Office, OpenOffice, Adobe Systems   
//= Oracle, MySQL, SQL Server, IBM DB2, IBM Informix, SAP DB
//= Windows Media Player, Nero, Nero, Apple iPod Software 
//=
//==== Histórico =========================================================================================================================
//= 1979 - 1989 - Pesquisa: C com classes, C++ ARM
//= 1989 - 1999 - Tendência: investimento pesado em compiladores e ferramentas (ISO C++98) 
//= 1999 - 2009 - Linguagens focadas em produtividade Java / C - Pergunta: elas conseguem resolver tudo ?
//= 2009 - 2019 - Código nativo voltou a ser importante Retorno do Rei: Desempenho / $dolar / Watt / Transistor / Ciclo
// 
//==== História da Linguagem C++ =========================================================================================================
//= No início de 1970 Dennis Ritchie do Bell Labs (AT&T)trabalhava em um projeto para desenvolver o Unix
//= Precisava produzir programas: Compactos, Rápidos, Controle eficiente do hardware
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Na época usava-se Assembly para atingir estes objetivos
//= Assembly é uma linguagem de baixo nível
//= Específica a uma família de processadores
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Ritchie decidiu construir uma linguagem de alto nível
//= Eficiente, portável e com acesso direto ao hardware
//= Nasceu a linguagem C.
//= C foi a linguagem dominante nos anos 80
//= C++ foi desenvolvido no início dos anos 80 por Bjarne Stroustrup, também do Bell Labs
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ “C++ foi desenvolvido para que meus amigos e eu não tivéssemos que programar em Assembly, C ou outra linguagem moderna.               │
//│  Seu propósito era escrever programas de forma mais fácil e agradável para o programador.” – Bjarne Stroustrup                        │
//└=======================================================================================================================================┘
//= Stroustrup estava mais preocupado em fazer C++ ser útil que seguir alguma filosofia em particular
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Ele decidiu criar C++ baseado em C porque:
//= Era uma linguagem pequena
//= Adequada a programação de sistemas grandes
//= Grande disponibilidade
//= Ligações com o sistema operacional Unix.
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= A linguagem Simula67 inspirou Stroustrup a introduzir orientação a objetos em C++
//= Stroustrup acrescentou também programação genérica sem modificar significativamente a base da linguagem C
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Hoje C++ é um superconjunto de C:
//= Qualquer programa C válido é um programa C++
//= Programas C++ podem usar as bibliotecas C
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= C++ é uma linguagem que une três filosofias de programação:
//= A programação estruturada (origem em C)
//= A programação orientada à objetos
//= A programação genérica
//= Iremos nos restringir a programação estruturada de C++
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= A grande popularidade de C++ levou a linguagem a várias plataformas e sistemas operacionais
//= Portabilidade e padronização se tornaram um problema
//=
//= Em 1990 a ANSI e a ISO criaram um comitê conjunto para padronizar a linguagem C++
//=
//= C++20 é o padrão atual, o C++23 está em desenvolvimento
//= 
//= Mais informações:  http://www.stroustrup.com/ 
//= 
//==== Resumo ============================================================================================================================
//= O computador é uma máquina que pode ser programada Um programa é uma seqüência de instruções
//= Um programa criado em linguagem de alto nível precisa ser traduzido para linguagem de máquina por um compilador
//= Faremos programas na linguagem C++ com o ambiente integrado Microsoft Visual Studio usando o compilador Visual C++
//========================================================================================================================================
//**************************************************************************************************************************************** 
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Quais as linguagens de programação mais populares atualmente e em que tipos de aplicações elas são usadas ?                           ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ JavaScript: criação de elementos complexos web sites do zero.                                                                         │
//│ HTML/CSS: layout de páginas web front-end.                                                                                            │
//│ SQL: bancos de dados relacionais em geral. Oracle, MSSQL, MySQL.                                                                      │
//│ Python: ciência de dados, Inteligência artifical, aplicação web, script de automação e desenvolvimento de jogos.                      │  
//│ JAVA: back-end corporativo de sistemas legado bancario e de telefonia, Big data, Android.                                             │ 
//│ C#: aplicações Windows na plataforma Microsoft, sistemas de desktop, computação em nuvem, e desenvolvimento de jogos.                 │
//│ C/C++: jogos complexos, desenvolvimento de plataformas, robótica, sistemas embarcados, aplicativos web, Internet das coisas, etc.     │
//│ GO: criada pelo Google para sistemas distribuídos e infraestruturas escaláveis, computação em nuvem, programação de rede.             │
//│ Rust: Sistemas embarcados, Servidores, Ferramentas de linha de comando, Back-end, WebAssembly.                                        │   
//│ Ruby: aplicações web e desktop, e-commerce e sistemas embarcados.                                                                     │
//│ PHP: em sites de todos os tipos, principalmente os simplificados e de pequeno porte.                                                  │
//│ NodeJS: Sites estáticos e dinâmicos. APIs RESTful, WebSockets.                                                                        │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Pesquise sobre as gerações das linguagens de programação e as diferenças entre: não-estruturadas, estruturadas e orientadas a objeto  ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│-Linguagens não-estruturadas: Permitem controle preciso sobre o hardware, são de baixo nivel difíceis de ler e manter.                 │
//│-Linguagens estruturadas: São mais legíveis e fáceis de manter do que as não estruturadas. Permitindo estruturas de controle.          │
//│ Permitem organizar o código em blocos, aumentando a legibilidade e organização.                                                       │
//│-Linguagens orientadas a objetos: Permitem reutilização e flexibilidade de código através de herança e polimorfismo.                   │
//│ Encapsulam dados e métodos em objetos. Podem ter uma curva de aprendizado mais complexa.                                              │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Qual a diferença entre uma linguagem de programação compilada e uma interpretada ? Existe diferença de desempenho entre elas ?        ║  
//║ Dê exemplos de linguagens dos dois tipos.                                                                                             ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//| O código fonte interpretado é traduzido linha por linha em linguagem de máquina durante a execução. Alterações pode ser testadas e    |
//| visualizadas imediatamente, o desenvolvimento é mais rápido. O codigo fonte compilado é traduzido em um único passo para linguagem de |
//| máquina executado diretamente pelo CPU, resultando em maior velocidade de execução.                                                   | 
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Quais os editores de código mais usados atualmente? Como o Visual Studio está posicionado nesse ranking ? Qual diferença de IDE?      ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Visual Studio Code, Sublime Text, Atom, IntelliJ IDEA, WebStorm, Vim, MS Visual Studio IDE, Eclipse.                                  │
//│ O Visual Studio é um IDE completo e poderoso, o mais popular entre desenvolvedores .NET e Windows. IDE é Ambiente de desenvolvimento  │
//│ com um toolkit completo. Já o editor código é leve e simples para escrever a sitanxe, autocompletar, indentação etc.                  │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Quais os principais ambientes de desenvolvimento para criação de código C++?                                                          ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│Visual Studio, Code::Blocks, Dev-C++, Clion, Qt Creator, Eclipse CDT, CodeLite, Xcode, NetBeans, Vim, KDevelop, Geany                  │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Quais os principais compiladores para a linguagem C++?                                                                                ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ GCC, Clang, Visual C++, Intel C++ Compiler, C++Builde, MinGW                                                                          │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//========================================================================================================================================
// 
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ AMBIENTE DE TRABALHO                                                                                                                  │
//└=======================================================================================================================================┘
//= Criando um Programa C++
//= Objetivo: familiarizar os alunos com o ambiente de trabalho do laboratório – Visual Studio 2019
//  
//==== Como criar um programa executável ? ===============================================================================================
//= Escrevendo o código fonte:
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Tudo começa escrevendo um código-fonte, um programa em C++ executável em nossa máquina.
//= Para escrever o código-fonte, use um ambiente de desenvolvimento como o Visual Studio. 
//= O código-fonte precisa ser passado pela ferramenta do compilador, responsável por traduzi-lo em um codigo de linguagem de máquina.
//= O código traduzido é chamado de código objeto ou arquivo objeto, que consiste em um conjunto de números 0 e 1 que só a maquina entende.
//= Uma outra ferramenta chamada ligador vai juntar o arquivo objeto ao código de inicialização e ao código das bibliotecas nativas. 
//= O código de inicialização está presente em todos os programas de linguagem de programação.
//= Dificilmente se escreve um programa sem usar nenhuma biblioteca nativa.
//= Esse processo vai gerar um programa executável.
//= Isso é feito o tempo todo que estivermos escrevendo programas. Executamos para ver se funciona corretamente
//= Escrevemos o código-fonte, traduzimos pelo compilador, o ligador junta o arquivo objeto ao inicializador e executa o programa.
// 
//==== Ambientes Integrados de Desenvolvimento(IDE) ======================================================================================
//= Alguns compiladores são usados em conjunto com ambientes integrados de desenvolvimento(IDE)
//= Esses programas possuem: editor de texto, compilador, ligador, deputador, ferramentas auxiliadores
//= MS Visual Studio é um ambiente como esse que fornece todas essas ferramentas.
//= Exemplo: Visual Studio, CLion, Eclipse, Netbeans, Code::blocks 
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Outros compiladores são disponibilizados sem nenhum ambiente de desenvolvimento:
//= Intel C++, GNU g++, Clang,
//= Neste caso o código fonte deve ser criado em um editor de textos auxiliar, compilado e executado na linha de comando
//= Ambiente desenvolmente traz a facilidade de compilar executando um programa com apertar de um botão,
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= O arquivo de código fonte deve ter uma extensão apropriada para ser identificado como um arquivo C++
//= exemplo.cpp
//=
//= Nome do arquivo | Extensão do arquivo separados por um ponto.
// 
//===== Extensões Suportadas =============================================================================================================
//=
//= Implementação do C++     Extensão do código fonte
//= Clang                    C, cc, cxx, cpp
//= GNU g++                  C, cc, cxx, cpp, c++
//= Microsoft Visual C++     cpp, cxx, cc
//= C++ Builder              cpp
//= CodeWarrior              cpp, cp, cc, cxx, c++
//= Digital Mars             cpp, cxx
//=
//= cxx significa c seguido de quaisquer duas letras
//=
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Criando um Projeto                                                                                                                    │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//===== Visual Studio 2019 ================================================================================================================
//= Na primeira vez que abrir o programa escolha criar projeto.
//= No Visual Studio todo programa deve fazer parte de um projeto (ou pasta).
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────  
//= Criar um projeto > Projeto vazio C++
//= Existem vários tipos de projetos. A principal informação é qual biblioteca do Windows o projeto utilizará.
//= ─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────── 
//= Nome do projeto: ProgComp
//= O resto não precisa alterar. 
//= Local mostra onde é guardado projeto. 
//= Nome da Solução: por default é igual ao nome do projeto. 
//= ─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────── 
//= Projeto e Solução ProgComp criados 
//= Um projeto pode ser criado dentro de uma solução. Uma solução pode conter vários projetos. Cada projeto pode ser um programa diferente.
// 
//===== Um projeto pode conter diferentes tipos de arquivos: =============================================================================
//= Arquivos de Cabeçalho (Header Files): arquivos com extensão .h usados para compartilhar informações entre arquivos fontes
//= Arquivos de Recurso (Resource Files): arquivos auxiliares usados no programa, como arquivos texto, imagens, ícones, sons, etc.
//= Arquivos de Origem (Source Files): arquivos com extensão .cpp que contém o código fonte do programa escrito em linguagem C++
// 
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Criando um Programa                                                                                                                   │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//===== Inserir um novo arquivo fonte no projeto =========================================================================================
//= Clicar com o Botão Direito em Arquivos de Origem > Adicionar > Novo Item...
//= Os programas serão escritos dentro de arquivos com a extensão .cpp e devem ser adicionados em Source Files. 
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Diferentes tipos de arquivos podem ser inseridos num projeto.
//= Para inserir o código fonte de um programa escolha Visual C++ > Arquivo do C++ (.cpp) > Primeiro (nome do arquivo).
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Primeiro.cpp está pronto para edição
//= Um projeto pode conter vários arquivos de codigo fonte.
//= ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────   
//= Use linhas em branco e indentação para organizar o código
//= Manter o deslocamento das instruções dentro de um bloco ({ }) é importante para organização visual do código.
//= 
//===== Digite o primeiro programa: ======================================================================================================
//primeiro.cpp - mostra uma mensagem
/*
#include <iostream>
using namespace std;

int main() 
{
    cout << "Bem-vindo ao C++";
    coux << endl;
    coup << "Meu primeiro programa";

    return 0;
}
*/
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Compilando um Programa                                                                                                                │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//===== Depurador Local do Windows: =======================================================================================================
//= Compilar e executar um programa: 
//= Clicar no Botão "Depurador Local do Windows"
//= “Depurador Local do Windows” traduz o programa para linguagem de máquina usando o compilador, 
//= liga o programa às bibliotecas e ao código de inicialização e gera um programa executável.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────  
//= O projeto precisa ser compilado antes de ser executado
//= Clique em Não mostrar esta caixa de diálogo novamente > Sim
//= Marque a opção "Não mostrar esta caixa de diálogo novamente" antes de responder a pergunta.
//= Esta tela diz que o código de máquina esta desatualizado e pergunta se você deseja compilar o programa antes de executá-lo. 
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= O compilador encontrou erros no programa
//= Não mostrar esta caixa de diálogo novamente > Não
//= Marque a opção "Não mostrar esta caixa de diálogo novamente" antes de responder a pergunta.
//= Se o compilador encontrar erros, ele mostrará esta tela perguntando para rodar a última versão do programa que compilou sem erros. 
//
//===== Verificar configurações de compilação e execução do Visual Studio: ===============================================================
//= Ferramentas > Opções > Projetos e Soluções > Compilar e Executar
//= Ao executar, quando projetos estiverem desataulizados, marque: compilar sempre
//= Ao executar, quando ocorrem erros de compilação ou interoretação, marque: não iniciar
//= Verifique se você respondeu certo as perguntas anteriores olhando as configurações de compilação e execução do Visual Studio.
// 
//===== Achar os erros no código fonte: ==================================================================================================
//= Se o programa contém erros, ele não será executado.
//= A lista de erros pode ser exibida através do menu Exibir > Lista de Erros.
//= Dê um clique duplo na mensagem de erro.
//= Leia as informações sobre o erro e corrija o programa. 
//= Há duas informações importantes nas mensagens de erro: a localização do erro (número da linha) e uma descrição do erro.
//= Você pode usar as setas para navegar de um erro a outro.  
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= A lista de saida pode ser exibida através do menu Exibir > Saida. Ou Clicando na aba "Saída" no canto inferior esquerdo  
//= Utilizando o botão "Ir para próxima mensagem", para navegar em cada linha de código de erro gerado pelo compilador. 
//
//===== Localizar marcação do erro no código fonte: ======================================================================================
//= Nem sempre o erro está na linha indicada
//= Muitas vezes o erro foi causado por uma falha na linha imediatamente acima. 
//= Por exemplo, retirando o ; de uma linha gera erro na linha seguinte.
//= As vezes o erro vem de falhas em linhas de código ainda mais distantes, porém sempre acima da linha de código sinalizada.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Corrigir os erros, salvar e re-compilar o programa
//= Clicar no Botão "Depurador Local do Windows"
//= Observe que as últimas linhas de código alteradas são marcadas com uma linha vertical amarela.
// 
//===== Executando um Programa: ==========================================================================================================
//= Compilação bem sucedida... programa rodando
//= Pressionar qualquer tecla para fechar o programa
//= Como estamos fazendo um programa para o Console do Windows, o resultado aparece sempre em uma tela do Prompt de Comando.
//
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Localização dos Arquivos                                                                                                              │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//= Verificar o local de armazenamento dos projetos: 
//= Ferramentas > Opções > Projetos e Soluções > Locais
//= Para saber em que lugar o Visual Studio guarda os arquivos fontes, veja a localização dos projetos em “Local dos Projetos".
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= O arquivo fonte está dentro de uma hierarquia de pastas
//= Source > Repos > ProgComp > ProgComp > Primeiro.cpp
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= O arquivo executável também encontra-se nesta hierarquia de pastas
//= » Para descobrir como fazer o executável rodar em uma máquina sem o Visual Studio: 
//= http://judsonsantiago.wordpress.com - Mamãe criei meu primeiro programa em C++
// Project > Properties e mudando a opção RunTime Library (Configuration Properties > C/C++ > Code Generation) 
// de “Multi-threaded Debug DLL” para “Multi-threaded Debug”.
//
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Iniciando um Novo Programa                                                                                                            │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//===== Inserir um arquivo fonte existente no projeto: ===================================================================================
//= Clicar com o Botão Direito em Arquivos de Origem > Adicionar > Item Existente...
//= Não é preciso criar outro projeto para criar outro programa. 
//= Basta adicionar um novo arquivo fonte (ou um já existente) e excluir o arquivo fonte antigo.
//
//===== Inserir novo arquivo fonte no projet: ===========================================================================================
//= Clicar com o Botão Direito em Arquivos de Origem > Adicionar > Novo Item ...
// 
//===== Remover o arquivo fonte antigo: ==================================================================================================
//= Clicar com o Botão Direito em Primeiro.cpp > Excluir do Projeto
//= O arquivo fonte não é apagado do disco, ele apenas é removido do projeto.
// 
//===== Compilar e executar o código fonte do novo programa: =============================================================================
// segundo.cpp – erros de sintaxe
/*
#include <iostream>
using namespace std;

int main()
{
    int cenouras;     // declara uma variável inteira
    cenouras = 25    // atribui um valor a uma variável

    cout << "Eu tenho  << cenouras << " cenouras " << endl;
    cenouras = cenouras - 1;     // decrementa a variável
    cout << "Agora eu tenho " << abacaxi << " cenouras." << endl;

    return 0;
}
*/
//===== Erros de Sintaxe: ================================================================================================================
//= Erros de sintaxe são identificados durante a compilação
//= Eles ferem a gramática da linguagem
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
// Erros de sintaxe encontrados: 
// C2146 ";" ausente antes de cout e cenouras. 
// C2059 faltando aspas de fechamento 
// C2065 abacaxi não declarada
//
//===== Compilar e executar o código fonte do novo programa: =============================================================================
// terceiro.cpp – erros de semântica
/*
#include <iostream>
using namespace std;

int main()
{
    int dias, horas, soma;      // declara uma variável inteira    
    cout << "Numero de Dias: ";
    cin >> dias;   // lê um valor para a variável

    horas = 60;
    soma = dias * horas;
    cout << dias << " dias tem " << soma << " horas." << endl;
    
    system("pause");
    return 0;
   
}
*/
//===== Erros de Semântica: ==============================================================================================================
//= Erros semânticos são erros na lógica de programação
//= O programa roda, mas dá um resultado errado
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= A maior parte dos erros semânticos não são detectados na compilação, o programa roda com um resultado errado.
//
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Depuração                                                                                                                             │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//= A depuração de programas é usada para identificar erros difíceis de encontrar
//===== Depurar significa: ================================================================================================================
//= Adicionar pontos de parada no código 
//= Executar o programa linha a linha
//= Verificar os valores das variáveis durante a execução
//
//===== Step Over: ========================================================================================================================
//= Podemos iniciar a execução passo a passo através:
//= Menu Depurar > Pular método
//= Tecla de Atalho: F10
// 
//===== Watch: ============================================================================================================================
//= Uma linha de código é executada a cada F10
//= Os valores das variáveis podem ser acompanhados pelas guias Automáticos, Locais, etc.
//=
//===== Breakpoint: =======================================================================================================================
//= A depuração também pode ser iniciada por um ponto de parada
//= basta cliclar na barra cinza ao lado esquerdo do numero da linha.
//=
//===== Resumo: ===========================================================================================================================
//= O Visual Studio exige a criação de projetos
//= Um projeto pode ser utilizado para vários programas
//= Excluir do Projeto
//= Adicionar Novo Item / Item Existente
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Em programação, existem dois tipos de erros:
//= Sintaxe: causam erros na compilação
//= Semântica: difíceis de detectar (usar depuração) 
//=========================================================================================================================================

//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Descreva passo a passo como criar um projeto em C++ no Visual Studio                                                                  ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Na primeira vez que abrir o programa, escolha criar um projeto.                                                                       │
//│ No Visual Studio, todo programa deve fazer parte de um projeto (ou pasta).                                                            │
//│ Para criar um projeto, selecione "Projeto vazio C++".                                                                                 │
//│ Existem vários tipos de projetos.A informação principal é qual biblioteca do Windows o projeto utilizará.                             │
//│ Dê um nome ao projeto; o resto não precisa ser alterado.                                                                              │
//│ O campo "Local" mostra onde o projeto será guardado.                                                                                  │
//│ O nome da Solução por padrão é igual ao nome do projeto.Pronto!O projeto e a Solução ProgComp foram criados.                          │
//│ Um projeto pode ser criado dentro de uma solução, e uma solução pode conter vários projetos.                                          │
//│ Cada projeto pode ser um programa diferente.                                                                                          │
//│ Além disso, um projeto pode conter diferentes tipos de arquivos,                                                                      │
//│ tais como : Arquivos de Cabeçalho(Header Files), Arquivos de Recurso(Resource Files) e Arquivos de Origem(Source Files).              │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Descreva como fechar um projeto aberto sem fechar o Visual Studio.                                                                    ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ No menu superior, vá para "File" (Arquivo). No menu suspenso do arquivo, você encontrará a opção "Close Solution" (Fechar Solução).   │
//│ Selecione "Close Solution" e o projeto atual será fechado, mas o Visual Studio permanecerá aberto.                                    │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Descreva os passos necessários para apagar por completo um projeto do disco, sem deixar rastros dele no Visual Studio                ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Abra a solução que contém o projeto que você deseja apagar.                                                                           │
//│ No Gerenciador de Soluções, clique com o botão direito do mouse no nome do projeto e selecione "Excluir".                             │
//│ Na caixa de diálogo de confirmação, marque a caixa de seleção "Excluir arquivos do disco" e clique em "Sim".                          │
//│ No Explorador de Arquivos e navegue até a pasta onde o projeto estava localizado. Exclua os seguintes arquivos e pastas:              │
//│ A pasta com o mesmo nome do projeto. A solução (.sln), (.vcxproj.filters) filtros de Soluções. (.suo) configurações de usuário        │
//│ Limpe cache: "Ferramentas" > "Opções". "Ambiente" > "Cache". "Limpar Cache" e selecione "Sim".                                        │   
//│ Reinicie o Visual Studio. Remover o projeto do repositório GIT. Remover artefatos manualmente das builds criadas.                     │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  O professor de programação de computadores utilizou o Visual Studio para criar um projeto chamado ProgComp e nele adicionou um       ║
//║  arquivo fonte chamado "primeiro.cpp". Se o Visual Studio está configurado para guardar os projetos em "C:\Visual Studio\Projects".   ║
//║  ♦ Onde está localizado "primeiro.cpp"? Indique o caminho completo.                                                                   ║
//║  ♦ Descreva a sequência de passos para criar e executar outro código fonte chamado "segundo.cpp", neste mesmo projeto.                ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ C:\Visual Studio\Projects\ProgComp\primeiro.cpp                                                                                       │
//│ Clicar com o Botão Direito em Arquivos de Origem > Adicionar > Novo Item... Visual C++ > Arquivo do C++(.cpp) > segundo.cpp           │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Um erro de sintaxe fere a gramática da linguagem de programação e por consequência gera um erro na hora da compilação do programa    ║
//║  Um erro de semântica é um erro na lógica de programação, que muitas vezes o compilador não detecta.                                  ║
//║  Um programa com um erro semântico pode executar, mas não dá a resposta esperada.                                                     ║
//║  Que tipo de ferramentas o Visual Studio oferece para tratar erros em um programa?                                                    ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Compilador Verifica se o código-fonte está em conformidade com a sintax. Depurador examinar variáveis e memória e identificar,        │
//| a causa dos erros passo a passo, analisar o estado do programa. Janela de Saída e Lista de erros Mostra mensagens e erro durante a    |
//| compilação e depuração. IntelliSense Fornece dicas e sugestões de código enquanto você digita.                                        |
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Qual opção de menu, e a tecla de atalho correspondente, para iniciar a depuração de um programa no Visual Studio?                    ║
//║  ♦ É possível iniciar a depuração se um programa possuir erros de sintaxe?                                                            ║
//║  ♦ Como iniciar a depuração sem ser pela tecla de atalho ou menu?                                                                     ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Podemos iniciar a execução passo a passo através: Depurar > Pular metodo. E pela tecla de atalho F10.                                 │
//│ Não é possível iniciar a depuração com erros de sintaxe.                                                                              │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  O que é um ponto de parada (breakpoint) e como adicionar um no Visual Studio?                                                        ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Clique na barra cinza ao lado esquerdo do numero da linha.                                                                            │
//│ Um breakpoint é uma ferramenta de depuração que permite interromper a execução de um programa em um ponto específico.                 │
//│ Util para Identificar um erro, analisar o comportamento e testar o comportamento do programa.                                         │ 
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Como se pode observar o valor de uma variável durante a depuração de um programa?                                                    ║
//║  Liste todas as formas possíveis para fazer isso no Visual Studio.                                                                    ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ Janela Locais > Menu Exibir" > "Saida". Apontando o Ponteiro do mouse em cima da variavel. IntelliSense e Usando depurador            │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Crie um novo projeto chamado Media, adicione um novo arquivo fonte chamado                                                           ║
//║  CalcMedia.cpp com o código abaixo.Compile e execute o programa :                                                                     ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
// CalcMedia.cpp – calcula a média das avaliações
#include <iostream>
using namespace std;
int main()
{
    float n1, n2, n3, media;
    cout << "Calculando a média" << endl;
    cout << "------------------" << endl;
    cout << endl;
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;
    cout << endl;
    media = (n1 + n2 + n3) / 3;
    cout << "A média das notas: " << media;
    cout << endl;
    
    system ("pause");
    return 0;

}
*/
//=========================================================================================================================================
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Crie um projeto seguindo os passos abaixo:                                                                                           ║
//║  ♦ Feche o projeto Media (usando o menu Arquivo > Fechar Solução)                                                                     ║
//║  ♦ Crie um projeto chamado MediaFinal                                                                                                 ║
//║  ♦ Abra o Windows Explorer e procure o arquivo CalcMedia.cpp na hierarquia de pastas do projeto Media.                                ║
//║  ♦ Ainda no Windows Explorer copie o arquivo CalcMedia.cpp para a hierarquia de pastas do projeto MediaFinal                          ║
//║  ♦ No Visual Studio clique com o botão direito em Arquivos de Origem > Adicionar > Item Existente... > CalcMedia.cpp                  ║
//║    para adicionar o arquivo no projeto MediaFinal                                                                                     ║
//║  ♦ Modifique o programa para perguntar a nota da 4ª prova e calcular a média final caso a média parcial das 3 notas seja inferior a 7.║
//║  ♦ Compile e execute o programa                                                                                                       ║
//║  Os passos acima descrevem o procedimento para inserir um arquivo de código  fonte de um projeto existente em um novo projeto.        ║
//║  É o procedimento a seguir se você baixar um arquivo.cpp da internet e quiser testá - lo.                                             ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Acompanhe a execução passo a passo do programa abaixo utilizando o depurador do Visual Studio para tentar descobrir por que a        ║
//║  variável b tem valor igual a zero  no fim da execução.                                                                               ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b, c=0;
    a = 1;
    b = 2;
    a = c;
    b = a;
    cout << b << endl;
    return 0;
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Quais os valores das variáveis a e b após executar a linha abaixo ? Todas as variáveis iniciam com valor zero ?                      ║
//║  int a, b, c = 0;                                                                                                                     ║
//║  Se o código acima for alterado de forma que a variável c não receba o valor zero, como mostrado abaixo,                              ║
//║  o programa ainda compila corretamente ? Se não, veja a mensagem de erro do compilador e explique o porquê do erro.                   ║
//║  int a, b, c;                                                                                                                         ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│  Não, apenas variavel c inicia com valor zero.                                                                                        │
//│  A variavel local c dá erro de memoria não inicializada na atribuição.                                                                │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Ao iniciar a depuração do código abaixo, você entende por que o depurador salta imediatamente para a linha “a = 1; ” ?               ║
//║  Isso acontecia com o programa da questão anterior ? Qual a explicação para essa diferença ?                                          ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
//│ A diferença é que depurador saltou para a linha que contem um variavel incializada.                                                   │
//│ No programa anterior a variavel foi inicializada na mesma linha que a variavel foi declarada.                                         │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
/*
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;
    return 0;
}
*/

//
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Iniciação ao C++                                                                                                                      │
//└=======================================================================================================================================┘

/*
#include <iostream>                 // Uma diretiva de pré-processamento
int main()                          // Cabeçalho da função 
{
    using namespace std;            //Dispensa uso do nome longo std::cout, std::endl

    cout << "Bem vindo ao C++.";    //Exibe mensagem na tela

    cout << endl;                   //Inicia uma nova linha

    cout << "Meu primeiro programa!" << endl;

    system ("pause");               //Espera pelo pressionamento de uma tecla

    return 0;                       //Finaliza a função main()
}
*/

//===== Iniciação ao C++: =================================================================================================================
//= A linguagem C++ faz diferença entre letras maiúsculas e minúsculas
//= Só existe uma forma de escrever cout:
//= cout √ 	kout ×
//= Cout × 	cour ×
//= COUT ×	coot ×
//= O compilador retorna um erro de identificador não declarado se for usada uma palavra inválida
 
//===== Resultado da Compilação: =========================================================================================================
/*
// programa de boas vindas
#include <iostream>
using namespace std;

int main()
{
    Cout << "Bem vindo ao C++." << ENDL; //erro C2065 'Cout' e 'ENDL' indetificador não declarado
    return 0;
}
*/

//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ A Função main():                                                                                                                      │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//= Cabeçalho da função:
//= int main() é o cabeçalho da função
//= int (indica que a função retorna um tipo de valor inteiro) 
//= Nome da função: main (nome padrão da função principal)
//= Parâmetros: () (a função main não recebe parâmetros)
//= ────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────── 
//= Corpo da função:  
//= Bloco de código delimitado por chaves {}
//= Dentro do corpo contém as instruções que serão executadas quando a função for chamada
//= As instruções podem ser declarações de variáveis, comandos de entrada e saída, operações matemáticas, etc.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Instrução de retorno:
//= O valor de retorno 0 indica que a função foi executada com sucesso.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Ponto e vírgula:   
//= Cada instrução na linguagem C termina com ponto e vírgula (;)
//= Isso serve para separar as instruções e evitar erros de compilação.
//= É possível distinguir facilmente as instruções, pois todas terminam com ponto e vírgula. 
//
//===== Instruções: ======================================================================================================================
//= Para traduzir corretamente as instruções, o compilador precisa saber exatamente onde uma instrução termina:
//= FORTRAN: uma instrução por linha
//= PASCAL: separa uma instrução da próxima com ;
//= C/C++: cada instrução termina por um ;
//= cout << "Bem vindo ao C++.";
//= cout << "Meu primeiro programa!" << endl;
//= return 0;
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Ao contrário de PASCAL, na linguagem C++ o ponto e vírgula faz parte da instrução
//= É possível distinguir facilmente as instruções, pois todas terminam com ponto e vírgula.
//
//===== cabeçalho: =======================================================================================================================
//= O cabeçalho de uma função descreve a interface da função
//= int descreve o Tipo de retorno
//= main () Parâmetros da função entre parenteses 
//= A função main é a interface entre o sistema operacional e o seu programa
//= Explicar o conceito de interface: mediador, homem do meio. Exemplo: o sistema operacional é uma interface entre o homem e a máquina.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= A função main também pode ser escrita assim:
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ int main(int argc, char ** argv)                                                                                                      │
//└=======================================================================================================================================┘
//= argc é a quantidade de comandos passados na linha de comando 
//= argv são os comandos em si
//= » Mostrar que é possível carregar programas do Prompt de Comando: notepad, mspaint.
//= argv são os comandos em si.
//= » Demonstrar o recebimento de argumentos no Prompt de Comando (ArgcArgv.cpp)
//  
//===== Utilizando argumentos passados na linha de comando: ===============================================================================
/*
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout << "Programa: " << argv[0] << endl;

    if (argc > 1)
        cout << "Arg: " << argv[1] << endl;

    system("pause");
    return 0;
}
*/
//===== Cabeçalho da Função: ==============================================================================================================
//= Muitos programas existentes usam o cabeçalho clássico da linguagem C
//= main()  // estilo original C    ×
//= Uma alternativa válida em C++ é dizer explicitamente que a função não recebe argumentos
//= int main(void) // estilo explícito
//= Em linguagem C omitir o tipo de retorno é o mesmo que dizer que a função retorna um tipo inteiro. 
//= C++ não assume mais isso.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Alguns programadores usam este cabeçalho para omitir a instrução de retorno
//= void main() //não está no padrão C++
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= O padrão ANSI/ISO C++ permite que o programador omita a instrução de retorno (somente na função main)
//= int main() // sem retorno explícito
//
//===== Comentários: =====================================================================================================================
//= Comentários são introduzidos com o uso de barras duplas
//= // comentários acabam no final da linha
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= O compilador ignora os comentários
//= Comentários devem ser usados para:
//= Documentar os programas
//= Ajudam outros a entenderem o programa
//= Permitem que o programador lembre o que fez
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= C++ também aceita comentários no estilo da linguagem C
//= Iniciando com /*
//= Finalizando com */
//
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Pré - processador de C++                                                                                                              │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
//= Um pré-processador é um programa que processa (modifica) o código fonte antes da compilação
//= O pré-processador trata as diretivas que iniciam com #
//= A diretiva #include adiciona o conteúdo de um arquivo ao código fonte do programa
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= adiciona o arquivo iostream ao programa
//= #include <iostream>
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Exemplos de outras diretivas: #define, #ifdef, #ifndef, #endif, #pragma
//
//===== Arquivo iostream: =================================================================================================================
//= O arquivo iostream contém as definições das funções de entrada e saída de dados
//= i = input (entrada)
//= o = output (saída)
//= stream = fluxo ou canal
//= Programas que usam cin e cout para entrada e saída de dados devem incluir o arquivo iostream
//
//===== Arquivo cabeçalho: ================================================================================================================
//= Arquivos como iostream são chamados:
//= Arquivos de cabeçalho (header files) ou
//= Arquivos de inclusão (include files)
//= Os includes são feitos no início (cabeçalho) do programa
/*
#include <iostream>
using namespace std;

int main(){}
*/
//= A tradição sempre foi usar a extensão.h para estes tipos de arquivos:
//= iostream.h – funções de entrada/saída
//= math.h – funções matemáticas
//= ────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────── 
//= A convenção atual é:
//= Não usar extensão nos arquivos padrão
//= Usar nos arquivos criados pelo programador
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= C++ aceita arquivos de cabeçalho:
//= Na nova convenção sem extensão (Ex.: iostream)
//= No antigo formato do C (Ex.: math.h)
//= Convertidos do C para C++ (Ex.: cmath)
//=
//=  Cabeçalho              Convenção       Exemplo         Usado por
//=  C++ estilo antigo      .h              iostream.h      Programas C++
//=  C estilo antigo        .h              math.h          Programas C e C++
//=  C++ novo estilo        Sem extensão    iostream        Programas C++
//=  C convertido           Prefixo c       cmath           Programas C++
//=
//= A diferença entre os arquivos com e sem.h não é meramente cosmética, os arquivos sem.h fazem uso de namespaces.
//= A extensão.h ainda é usada pela grande maioria dos programadores C++, 
//= ficando a versão sem extensão quase que restrita ao padrão da linguagem.
//=
//┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
//│ Namespaces:                                                                                                                           │
//└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘ 
//= Ao incluir iostream em um programa é preciso acrescentar a seguinte diretiva using:
/*
#include <iostream>
using namespace std;
*/
//= Isto permite usar os objetos cin e cout sem a designação do espaço de nome ao qual eles pertencem
//= std::cout << "Bem vindo ao C++."; // utilização sem a diretiva using
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= Podemos entender o namespace como a definição de uma categoria.Alunos podem estar em Computação, no BCT ou em Agronomia. 
//= Ao usar o espaço de nomes Computação, sempre que dentro do programa eu falar em aluno, 
//= ele saberá que estou falando de um aluno de Computação.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= É um recurso que permite combinar códigos existentes de diferentes fornecedores :
//= Se duas empresas desenvolverem um objeto cout, elas o farão sob diferentes namespaces :
//= Mioflop::cout – objeto cout da Mioflop
//= Wanda::cout – objeto cout da Wanda
//= Para usar todos os objetos da Mioflop:
//= using namespace Mioflop;
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= » Para projetos grandes que possuem código de vários fornecedores pode ser melhor não incluir completamente o espaço de nomes
//= (using namespace std) mas para simplificar os exemplos faremos sempre isso.
//= Não existe prejuízo em termos de desempenho, mas ao incluir completamente um espaço de nomes aumenta - 
//= se a probabilidade de colisão entre nomes de variáveis e funções.Ex.: tipo data em iostream, POINT em windows.h.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= As funções, classes e objetos  padrões da linguagem C++ foram colocados no espaço de nomes std
//= Para ter acesso a tudo definido em std:
//= using namespace std;
//= Para ter acesso apenas a itens selecionados:
//= using std::cout;
//= using std::cin;
//= using std::endl;
//
//===== Saída de Dados com cout: =========================================================================================================
//= O programa primeiro.cpp usa cout para exibir uma mensagem na tela :
//= Um objeto predefinido que sabe como mostrar  números e caracteres
//= conjunto de caracteres (string)
//= Operador de inserção: indica a direção do fluxo de informações
//
//===== O Manipulador endl: ==============================================================================================================
//= O programa primeiro.cpp usa cout também para pular linhas na tela :
//= Manipulador: cout << endl;
//= Enviar endl para a saída faz o cursor saltar para o início da próxima linha 
//= Assim como cout, endl é definido no arquivo iostream
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= cout não pula linha automaticamente:
/*
cout << " O Bom, o ";
cout << " ruim, ";
cout << " e o desconhecido. ";
cout << endl;
*/
//= Produzirá a saída:
//= O Bom, oruim, e o desconhecido.
//=
//===== O Caractere de Nova Linha: =======================================================================================================
//= Existe outra forma de produzir um salto de linha:
//= \n significa comece uma nova linha
//= cout << " E agora?\n ";
//= A combinação \n é considerada como um único caractere
//= os pares de instruções abaixo são equivalentes
//= cout << " Júpiter é um planeta grande.\n ";
//= cout << " Júpiter é um planeta grande. " << endl;
//= cout << " \n ";
//= cout << endl;
//= \n possui desempenho melhor que endl porque endl executa um salto de linha em um “flush” do buffer de saída. 
//
//===== Formatação do Código Fonte: ======================================================================================================
//= Ao editar um código C++ o programador tem muita flexibilidade na formatação do código
//= Em C++ o carriage return (CR) é tratado da mesma forma que um espaço em branco ou um tab.
//= International Obfuscated C Code Contest(www.ioccc.org)
/*
#include <iostream>
    int
main
() { using
  namespace
       std;	cout
   <<
"Bem vindo ao C++."
;cout <<
endl; cout << "Meu primeiro programa!"
<< endl; return 0; }
*/
//===== Estilo de Código C++: ============================================================================================================
//= A leitura do código fonte é facilitada se o programador seguir algumas regras básicas:
// primeiro.cpp – mostra uma mensagem
//= Constrói-se programas a partir de blocos chamados funções. 
//= Normalmente quebra-se um programa em grandes tarefas e constrói-se funções separadas para cada tarefa.
/*
#include <iostream>
using namespace std;
                                                //Uso de espaços para separar blocos
int main()                                      //Abra e feche chaves em linhas separadas
{
    cout << "Bem vindo ao C++.";                //Uma instrução por linha
    cout << endl;
    cout << "Meu primeiro programa!" << endl;   //Instruções indentadas
    return 0;
}
*/
//===== Resumo: ==========================================================================================================================
//= Programas iniciam a execução a partir de uma função principal chamada main()
//= Uma função consiste em:
//= Um cabeçalho: define a interface da função, o tipo de valor recebido e o tipo de valor retornado como resultado
//= Um corpo: consiste em uma série de instruções dentro de um par de chaves ({}) e finalizadas por ponto-e-vírgula
//= Diretivas de pré-processamento modificam o programa
//= São executadas antes de iniciar a compilação
//= #include insere o conteúdo de um arquivo no programa
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= A instrução de saída de dados (cout) 
//= Está definida no arquivo de cabeçalho iostream
//= Não salta linhas automaticamente
//= Use o manipulador endl 
//= Ou o caractere '\n'
//=
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Crie um programa que exiba as informações abaixo usando apenas um cout.                                                              ║
//║  Faça uma versão que utilize apenas endl para saltar linhas.Faça outra versão que utilize apenas \n para saltar linhas.               ║
//║   Use três cout’s, porém com o texto aparecendo na mesma linha, como mostrado abaixo.                                                 ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;

int main() 
{
    cout << "Bem-vindo" << endl << "ao mundo" << endl << "do C++.";
    cout << "\n\nBem-vindo\nao mundo do \nC++.\n\n";
    cout << "Bem-vindo";
    cout << " ao mundo";
    cout << " do C++.";
    cout << endl;
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║  Crie um projeto, digite, compile e execute o programa abaixo:                                                                        ║
//║  O programa exibe corretamente os acentos?                                                                                            ║
//║  E o nome lido pelo teclado, ele pode conter acentos?                                                                                 ║
//║  Em um programa C++, podemos  Executar um comando do sistema usando a função system                                                   ║
//║  Execute o programa diretamente do Prompt de Comando. Houve alguma diferença ?                                                        ║
//║  Em um programa C++, podemos  Executar um comando do sistema usando a função system                                                   ║                                                                        
//║  Agora execute o comando “chcp 1252” no prompt de Comando e tente novamente rodar o programa.                                         ║
//║  Insira a chamada de sistema abaixo no início do programa e veja o resultado                                                          ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    // exibindo uma frase que contém acentos
    cout << "Acentuação é possível?" << endl;

    // leia uma palavra que contém acentos
    char palavra[40];
    cin >> palavra;

    // exibindo o que foi lido
    cout << palavra << endl;
    system("pause");
    return 0;
}
*/
//= Dica: o prompt de comando pode ser acessado pelo
//= Menu > Ferramentas > Linha de Comando > Prompt de Comando do Desenvolvedor 
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= 2. alterando o código de página silenciosamente:
//= system("chcp 1252 > nul");
//= O comando system ativa no prompt de comando a região do idioma em português. 
//= Sem a instrução "nul", aparece a mensagem "página de código ativa: 1252" quando o programa é executado.
//= Esse comando leva aproximadamente 1 segundo para ser executado.
//= Esse tempo é inaceitável para um programa que roda em milissegundos.
//= O comando system é do prompt de comando 
//= ────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────── 
//= 3. A forma mais performática é usar uma biblioteca do Windows. 
//= incluindo windows.h 
//= O funcionamento é muito mais rápido do que fazer uma chamada de sistema.
//= ────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────── 
//= 4. setlocale só serve para exibir e não para receber entrada de comando.
//= ──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//= 5. Atualmente, o prompt de comando é menos utilizado. (Aprendizado).
//= Ao desenvolver um programa profissional, se utiliza a própria janela visual.

//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Escreva um programa que receba dois nomes pela linha de comando e exiba uma mensagem, como mostrado no exemplo abaixo.                ║
//║ a. Execute o programa pelo Prompt de Comando do Desenvolvedor.   :                                                                    ║
//║ C:\Users\Aluno\Source\Repos\ProgComp\Debug>ProgComp.exe Eu amo Eu amo programar!                                                      ║
//║ Dica: pesquise sobre o comando "cl" para compilar no prompt de comando.                                                               ║
//║ b. O que acontece se o usuário não digitar as 3 palavras após o nome do programa ?                                                    ║
//║ C:\Users\Aluno\Source\Repos\ProgComp\Debug>ProgComp.exe Eu ? ? ?                                                                      ║
//║ O programa crasha e fecha ao tentar acessar uma posição de memoria invalida de argv[2].                                               ║
//║ Dica: se o programa verificar a quantidade de argumentos recebidos, não deve acontecer nada                                           ║
//║ Execute o programa pelo Visual Studio. Para isso passe os argumentos através do                                                       ║
//║ Menu Projeto > Propriedades > Propriedades de Configuração > Depuração > Argumentos do Comando: "Eu amo"                              ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
    cout << argv[1] << " " << argv[2] << " Programar!!" << endl;   
    return 0;
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Escreva um programa para exibir seu nome, sobrenome e endereço na tela, seguindo a mesma organização do exemplo abaixo :              ║
//║  Antônio Bezerra                                                                                                                      ║
//║  Av.Costa Larga, 540                                                                                                                  ║
//║  Mossoró, RN                                                                                                                          ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;

int main() {
    cout << " Antônio Bezerra     " << endl;
    cout << " Av.Costa Larga, 540 " << endl;
    cout << " Mossoró, RN         ";    
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Escreva um programa que utilize uma chamada a cout para exibir seu nome completo em uma linha.                                        ║
//║ Use um segundo cout para exibir seu nome e sobrenome em linhas diferentes,                                                            ║
//║ e use dois cout’s para exibir seu nome e sobrenome na mesma linha.                                                                    ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;

int main() {
    system("chcp 1252 > nul");
    cout << "Antônio Bezerra" << endl;
    cout << "Antônio \nBezerra\n";
    cout << "Antônio";
    cout << " Bezerra";    
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Verifique o que o programa abaixo exibe.                                                                                              ║
//║ Acompanhe a sua execução passo a passo através do depurador do Visual Studio(tecla de atalho F10).                                    ║
//║ Dica: Pesquise como exibir outros caracteres gráficos lendo o Capítulo 1 do livro “Treinamento em Linguagem C++”                      ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    system("chcp 850 > nul");
    cout << "\n\n";
    cout << "\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB";
    cout << "\n\t\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF";
    cout << "\n\n";
    cout << "\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xBB";
    cout << "\n\t\xBA C++ \xBA";
    cout << "\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xBC";
    cout << "\n\n";
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Execute e tente entender o que cada instrução do programa abaixo faz.                                                                 ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    cout << left; cout.width(10); cout << "Produto";
    cout << right; cout.width(6); cout << "Quant";
    cout.width(8); cout << "Valor" << endl;
    cout << left; cout.width(10); cout << "-------";
    cout << right; cout.width(6); cout << "-----";
    cout.width(8); cout << "-----" << endl;
    cout << left; cout.width(10); cout << "Abacaxi";
    cout << right; cout.width(6); cout << "2.5";
    cout.width(8); cout << "1.99" << endl;
    cout << left; cout.width(10); cout << "Cenoura";
    cout << right; cout.width(6); cout << "4.6";
    cout.width(8); cout << "5.90" << endl;
    cout << left; cout.width(10); cout << "Limao";
    cout << right; cout.width(6); cout << "20.5";
    cout.width(8); cout << "10.40" << endl;
    cout << left; cout.width(10); cout << "Maca";
    cout << right; cout.width(6); cout << "345.0";
    cout.width(8); cout << "120.30" << endl;
    cout << left; cout.width(10); cout << "Goiaba";
    cout << right; cout.width(6); cout << "20.5";
    cout.width(8); cout << "56.00" << endl;
    return 0;
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Construa um programa que contenha somente um cout com a seguinte saída: C + +                                                         ║
//║ Para a solução desta questão não utilize os recursos de alinhamento no exercícios anterior  :                                         ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    cout << left; cout << "C" << endl; cout << right; cout.width(6); cout << "+" << endl << right; cout.width(12); cout << "+";
    cout << "\n\nC" << "\n\t+" << "\n\t\t+";
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Construa um programa que exiba um retângulo com bordas duplas, semelhante ao exibido abaixo.                                          ║
//║ Utilize os caracteres gráficos abordados na questão do exercícios de fixação.                                                         ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n";
    cout << "\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB";
    cout << "\n\t\xBA              \xBA";
    cout << "\n\t\xBA              \xBA";
    cout << "\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC";
    cout << "\n\n";
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Construa um programa que exiba o texto abaixo usando os recursos de alinhamento do cout, na questão dos exercícios de fixação.        ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main()
{
    system("chcp 1252 > nul");

    cout << left; cout.width(12); cout << "Produto";
    cout << right; cout.width(12); cout << "Preço / Kg";
    cout.width(12); cout << "Pedido(Kg)";
    cout.width(15); cout << "Total Parcial" << endl;

    cout << left; cout.width(12); cout << "-------";
    cout << right; cout.width(12); cout << "----------";
    cout.width(12); cout << "----------";
    cout.width(15); cout << "-------------" << endl;
    
    cout << left; cout.width(12); cout << "Alface";
    cout << right; cout.width(12); cout << "R$ 1,25/Kg";
    cout.width(12); cout << "3,2Kg";
    cout.width(15); cout << "R$ 4,00" << endl;

    cout << left; cout.width(12); cout << "Beterraba";
    cout << right; cout.width(12); cout << "R$ 0,65/Kg";
    cout.width(12); cout << "6,0Kg";
    cout.width(15); cout << "R$ 3,90" << endl;

    cout << left; cout.width(12); cout << "Cenoura";
    cout << right; cout.width(12); cout << "R$ 0,90/Kg";
    cout.width(12); cout << "10,0Kg";
    cout.width(15); cout << "R$ 9,00" << endl;
    
    return 0;
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Crie um programa que receba 3 argumentos pela linha de comando e exiba apenas o primeiro e o último dentro de uma mensagem:           ║
//║ C:\Users\Aluno\Source\Repos\ProgComp\Debug>ProgComp.exe C++ Java C Estou aprendendo C / C++!                                          ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main( int argc, char ** argv) {
    cout << "Estou aprendendo " << argv[1] << " / " << argv[3];
    return 0;
}
*/
//╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗
//║ Crie um programa que receba o nome de um aplicativo do sistema pela linha de comando e abra o aplicativo.                             ║
//║ Use as linhas de comando abaixo para testar seu programa.                                                                             ║
//║ Ele deve abrir a calculadora(calc), o bloco de notas(notepad) e o programa de pintura(mspaint):                                       ║
//╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝
/*
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    system(argv[1]);
    system(argv[2]);
    system(argv[3]);
    return 0;
}
*/
