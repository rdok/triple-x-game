#include <iostream>
#include <ctime>
#include <tuple>

void IntroduceStory() {
    std::cout << "Entering TripleX\n";
    std::cout << "================\n";

    std::cout << "You hurry up, and move into the data center room.\n";
    std::cout << "Your heart is racing, and the adrenaline is racing through "
                 "your veins."
              << std::endl;
    std::cout << "Some of the machines in front you have USB sockets.\n";
    std::cout << "Taking out your dev machine from your backpack, it takes you"
                 " a couple of tries to plug it in; your hand is trembling "
                 "from the stress.\n";
    std::cout << "Finally, with your trusty Arch Linux OS, you're ready.\n\n";
}

void PrintValidResponseMessage(int Difficulty) {
    if (Difficulty == 1) {
        std::cout << R"(
 ______________
||            ||
||            ||
||            ||
||            ||
||____________||
|______________|
 \\############\\
  \\############\\
   \      ____    \
    \_____\___\____\
)"
                  << "\n";

        std::cout << "OK, that worked. You list all volumes available.\n\n";
        return;
    }

    if (Difficulty == 2) {
        std::cout << R"(
Fight Bugs                      |     |
                                \\_V_//
                                \/=|=\/
                                 [=v=]
                               __\___/_____
                              /..[  _____  ]
                             /_  [ [  M /] ]
                            /../.[ [ M /@] ]
                           <-->[_[ [M /@/] ]
                          /../ [.[ [ /@/ ] ]
     _________________]\ /__/  [_[ [/@/ C] ]
    <_________________>>0---]  [=\ \@/ C / /
       ___      ___   ]/000o   /__\ \ C / /
          \    /              /....\ \_/ /
       ....\||/....           [___/=\___/
      .    .  .    .          [...] [...]
     .      ..      .         [___/ \___]
     .    0 .. 0    .         <---> <--->
  /\/\.    .  .    ./\/\      [..]   [..]
 / / / .../|  |\... \ \ \    _[__]   [__]_
/ / /       \/       \ \ \  [____>   <____]
)"
                  << "\n";

        std::cout << "Hmm, you found a bug in your script. With that fixed you break to the next layer.\n";
        return;
    }

    {
        std::cout << R"(
                    ____
                 _.' :  `._
             .-.'`.  ;   .'`.-.
    __      / : ___\ ;  /___ ; \      __
  ,'_ ""--.:__;".-.";: :".-.":__;.--"" _`,
  :' `.t""--.. '<@.`;_  ',@>` ..--""j.' `;
       `:-.._J '-.-'L__ `-- ' L_..-;'
         "-.__ ;  .-"  "-.  : __.-"
             L ' /.------.\ ' J
              "-.   "--"   .-"
             __.l"-:_JL_;-";.__
          .-j/'.;  ;""""  / .'\"-.
        .' /:`. "-.:     .-" .';  `.
     .-"  / ;  "-. "-..-" .-"  :    "-.
  .+"-.  : :      "-.__.-"      ;-._   \
  ; \  `.; ;                    : : "+. ;
  :  ;   ; ;                    : ;  : \:
 : `."-; ;  ;                  :  ;   ,/;
  ;    -: ;  :                ;  : .-"'  :
  :\     \  : ;             : \.-"      :
   ;`.    \  ; :            ;.'_..--  / ;
   :  "-.  "-:  ;          :/."      .'  :
     \       .-`.\        /t-""  ":-+.   :
      `.  .-"    `l    __/ /`. :  ; ; \  ;
        \   .-" .-"-.-"  .' .'j \  /   ;/
         \ / .-"   /.     .'.' ;_:'    ;
          :-""-.`./-.'     /    `.___.'
                \ `t  ._  /  bug :F_P:
                 "-.t-._:'
)"
                  << "\n";

        std::cout << "OK, that worked. You mount the volume to your machine, and start copying it's data.";
        return;
    }
}

void PrintInValidResponseMessage() {
    std::cout << R"(
███████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓█
████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█
███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█
████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█
███▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
████▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
█████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█
█████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
█████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██
████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██
█████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██
█████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███
██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███
███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████
███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████
████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████
█████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████
██████████▓▓▓█▓▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬▓███████
███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████
██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████
███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████
)"
              << "\n";
    std::cout << "That didn't work. You decide to give it another go.\n\n";
}

std::tuple<int, int, int> PromptPlayerHack(int MatrixSum, int MatrixProduct) {
    int PlayerAlphaCode, PlayerBetaCode, PlayerGammaCode;

    std::cout << "Code Review\n";
    std::cout << "===========\n";
    std::cout << "✖ There are 3 numbers in the code\n";
    std::cout << "✖ They add up to: " << MatrixSum << "\n";
    std::cout << "✖ The codes multiply to: " << MatrixProduct << "\n\n";

    std::cout << "Enter the three codes:\n";
    std::cin >> PlayerAlphaCode >> PlayerBetaCode >> PlayerGammaCode;
    std::cout << "You responded with: " << PlayerAlphaCode << ", ";
    std::cout << PlayerBetaCode << ", and " << PlayerGammaCode << "\n\n";

    return std::make_tuple(PlayerAlphaCode, PlayerBetaCode, PlayerGammaCode);
}

bool HasValidPlayerHackAttempt(int AlphaCode, int BetaCode, int GammaCode, int MatrixSum, int MatrixProduct) {
    const int Product = AlphaCode * BetaCode * GammaCode;
    const int Sum = AlphaCode + BetaCode + GammaCode;

    std::cout << "Product: " << Product << "\n";
    std::cout << "Sum: " << Sum << "\n\n";

    bool bHasValidProduct = Product == MatrixProduct;
    bool bHasValidSum = Sum == MatrixSum;

    return bHasValidProduct && bHasValidSum;
}

std::tuple<int, int> generateMatrix(int Difficulty) {
    const int FirstCode = rand() % Difficulty + Difficulty;
    const int SecondCode = rand() % Difficulty + Difficulty;
    const int ThirdCode = rand() % Difficulty + Difficulty;

    const int MatrixSum = FirstCode + SecondCode + ThirdCode;
    const int MatrixProduct = FirstCode * SecondCode * ThirdCode;

    return std::make_tuple(MatrixSum, MatrixProduct);
}

int main() {
    srand(time(nullptr));
    int MaxDifficulty = 3;
    int Difficulty = 1;
    int MatrixSum, MatrixProduct, PlayerAlphaCode, PlayerBetaCode, PlayerGammaCode;
    bool bHasValidPlayerHackAttempt;

    IntroduceStory();

    while (Difficulty <= MaxDifficulty) {
        std::tie(MatrixSum, MatrixProduct) = generateMatrix(Difficulty);
        std::tie(PlayerAlphaCode, PlayerBetaCode, PlayerGammaCode) = PromptPlayerHack(MatrixSum, MatrixProduct);

        bHasValidPlayerHackAttempt =
                HasValidPlayerHackAttempt(PlayerAlphaCode, PlayerBetaCode, PlayerGammaCode, MatrixSum, MatrixProduct);

        if (bHasValidPlayerHackAttempt) {
            Difficulty++;
            PrintValidResponseMessage(Difficulty);
        } else {
            PrintInValidResponseMessage();
        }

        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}
