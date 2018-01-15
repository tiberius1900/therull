#ifndef THERULL_THETUCE_GAME_H_
#define THERULL_THETUCE_GAME_H_

#include <fstream>
#include <string>
#include <vector>

namespace thetuce {

enum InputMode {
  kStandard,
  kFile
};

enum OutputMode {
  kStandard,
  kFile
};

enum GameMode {
  kNormal,
  kCustom
};
  
struct GameOptions {
  InputMode input_mode;
  std::ifstream input_file;

  OutputMode output_mode;
  std::ofstream output_file;

  GameMode game_mode;
  std::ifstream game_mode_file;
};

struct GameModeOptions {
  
  int num_of_players;
  std::vector<std::vector<std::string>> initial_table;
  std::string player_order;
  
};
 
class Game {
 public:
  int Start(int argc, char** argv);
  
 private:
  GameOptions GetOptions(int argc, char** argv);
  GameModeOptions SetDefaultGameModeOptions();
  int Run();

  Board game_board_;
  GameOptions game_options_;
  GameModeOptions game_mode_options_;
};
 
} //namespace thetuce

#endif // THERULL_THETUCE_GAME_H_
