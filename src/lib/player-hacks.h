#ifndef TRIPLE_X_GAME_PROMPT_PLAYER_HACK_H
#define TRIPLE_X_GAME_PROMPT_PLAYER_HACK_H

#endif //TRIPLE_X_GAME_PROMPT_PLAYER_HACK_H

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
