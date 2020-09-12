#ifndef MAIN_HPP
#define MAIN_HPP

static constexpr unsigned int SCREEN_WIDTH = 800;
static constexpr unsigned int SCREEN_HEIGHT = 800;
static constexpr unsigned int GRID_WIDTH = SCREEN_WIDTH / 30;
static constexpr unsigned int GRID_HEIGHT = SCREEN_HEIGHT / 30;
static constexpr unsigned int TARGET_FPS = 60;
static constexpr unsigned int TARGET_FRAME_DURATION = 1000 / 60;

int main();

#endif /* MAIN_HPP */