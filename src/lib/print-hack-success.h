#ifndef TRIPLE_X_GAME_PRINT_HACK_SUCCESS_H
#define TRIPLE_X_GAME_PRINT_HACK_SUCCESS_H

#endif //TRIPLE_X_GAME_PRINT_HACK_SUCCESS_H

void PrintHackSuccessMessage(int difficulty) {
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

