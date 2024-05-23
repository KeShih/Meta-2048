#pragma once

#include <array>
#include <cstddef>
template<std::size_t Row, std::size_t Col>
struct GameState {
    std::array<std::array<int, Row>, Col>;
    int score;
    int best;
};