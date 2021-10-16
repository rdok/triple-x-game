#ifndef TRIPLE_X_GAME_GENERATE_MATRIX_H
#define TRIPLE_X_GAME_GENERATE_MATRIX_H

#endif //TRIPLE_X_GAME_GENERATE_MATRIX_H

std::tuple<int, int> generateMatrix(int difficulty_multiplier) {
    const int alpha_code = rand() % difficulty_multiplier + difficulty_multiplier;
    const int beta_code = rand() % difficulty_multiplier + difficulty_multiplier;
    const int gemma_code = rand() % difficulty_multiplier + difficulty_multiplier;

    const int matrix_sum = alpha_code + beta_code + gemma_code;
    const int matrix_product = alpha_code * beta_code * gemma_code;

    return std::make_tuple(matrix_sum, matrix_product);
}

