#include <iostream>
#include <ctime>
#include <tuple>
#include "lib/print-story-intro.h"
#include "lib/print-hack-success.h"
#include "lib/print-hack-failed.h"
#include "lib/player-hacks.h"
#include "lib/generate-matrix.h"

int main() {
    srand(time(nullptr));
    int max_difficulty = 3;
    int difficulty_multiplier = 1;
    int matrix_sum, matrix_product, alpha_code, beta_code, gamma_code;
    bool has_valid_hack_attempt;

    PrintStoryIntro();

    while (difficulty_multiplier <= max_difficulty) {
        std::tie(matrix_sum, matrix_product) = generateMatrix(difficulty_multiplier);
        PromptHack(matrix_sum, matrix_product);

        std::tie(alpha_code, beta_code, gamma_code) = GetPlayerHack();
        has_valid_hack_attempt = HasValidHackAttempt(alpha_code, beta_code, gamma_code, matrix_sum, matrix_product);

        if (has_valid_hack_attempt) {
            difficulty_multiplier++;
            PrintHackSuccessMessage(difficulty_multiplier);
        } else {
            PrintHackFailedMessage();
        }

        std::cin.clear();
        std::cin.ignore();
    }

    return 0;
}
