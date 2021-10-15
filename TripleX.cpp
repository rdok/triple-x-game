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

void PrintValidResponseMessage(int difficulty) {
    if (difficulty == 1) {
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

    if (difficulty == 2) {
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

bool HasValidPlayerHackAttempt(int alpha_code, int beta_code, int gamma_code, int matrix_sum, int matrix_product) {
    const int product = alpha_code * beta_code * gamma_code;
    const int sum = alpha_code + beta_code + gamma_code;

    std::cout << "product: " << product << "\n";
    std::cout << "sum: " << sum << "\n\n";

    bool has_valid_product = product == matrix_product;
    bool b_has_valid_sum = sum == matrix_sum;

    return has_valid_product && b_has_valid_sum;
}

std::tuple<int, int> generateMatrix(int Difficulty) {
    const int alpha_code = rand() % Difficulty + Difficulty;
    const int beta_code = rand() % Difficulty + Difficulty;
    const int gemma_code = rand() % Difficulty + Difficulty;

    const int matrix_sum = alpha_code + beta_code + gemma_code;
    const int matrix_product = alpha_code * beta_code * gemma_code;

    return std::make_tuple(matrix_sum, matrix_product);
}

int main() {
    srand(time(nullptr));
    int max_difficulty = 3;
    int difficulty = 1;
    int matrix_sum, matrix_product, player_alpha_code, player_beta_code, player_gamma_code;
    bool has_valid_player_hack_attempt;

    IntroduceStory();

    while (difficulty <= max_difficulty) {
        std::tie(matrix_sum, matrix_product) = generateMatrix(difficulty);
        std::tie(player_alpha_code, player_beta_code, player_gamma_code) = PromptPlayerHack(matrix_sum, matrix_product);

        has_valid_player_hack_attempt =
                HasValidPlayerHackAttempt(player_alpha_code, player_beta_code, player_gamma_code, matrix_sum, matrix_product);

        if (has_valid_player_hack_attempt) {
            difficulty++;
            PrintValidResponseMessage(difficulty);
        } else {
            PrintInValidResponseMessage();
        }

        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}
