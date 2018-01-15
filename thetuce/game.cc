#include "game.h"

#include <cstdlib>

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "game-mode-processor.h"

namespace thetuce {

Game::Start(int argc, char** argv) {
  game_options_ = GetOptions(int argc, char** argv);

  SetDefaultGameModeOptions();

  if (game_options_ == kStandard)   
    GameModePreprocessor(this);
    
  game_board_.Construct(game_mode_options_);
    

    
  GameModeProcessor(this);
    


  Run();
}

Game::GetOptions(int argc, char** argv) {
    //<defining default options>
  game_options_.input_mode = kStandard;
  game_options_.output_file = kStandard;
  game_options_.output_file = kNormal;
    
    //</defining default options>
  for (int i{}; i < argc; ++i) {
      
      
  }
    
}

Game::SetDefaultGameModeOptions() {
  game_mode_options_.num_of_players = 2;
    
    game_mode_options_.initial_table.at(0).at(0) = "0-rook";
    game_mode_options_.initial_table.at(0).at(7) = "0-rook";
    game_mode_options_.initial_table.at(7).at(0) = "1-rook";
    game_mode_options_.initial_table.at(7).at(7) = "1-rook";

    game_mode_options_.initial_table.at(0).at(1) = "0-knight";
    game_mode_options_.initial_table.at(0).at(6) = "0-knight";
    game_mode_options_.initial_table.at(7).at(1) = "1-knight";
    game_mode_options_.initial_table.at(7).at(6) = "1-knight";

    game_mode_options_.initial_table.at(0).at(2) = "0-bishop";
    game_mode_options_.initial_table.at(0).at(5) = "0-bishop";
    game_mode_options_.initial_table.at(7).at(2) = "1-bishop";
    game_mode_options_.initial_table.at(7).at(5) = "1-bishop";

    game_mode_options_.initial_table.at(0).at(3) = "0-queen";
    game_mode_options_.initial_table.at(7).at(3) = "1-queen";

    game_mode_options_.initial_table.at(0).at(4) = "0-king";
    game_mode_options_.initial_table.at(7).at(4) = "1-king";

    for (int i{}; i < 8; ++i) {
    game_mode_options_.initial_table.at(1).at(i) = "0-pawn";

      for (int j{2}; j < 6; ++j)
	game_mode_options_.initial_table.at(j).at(i) = "nothing";
      
    game_mode_options_.initial_table.at(6).at(i) = "1-pawn";

    }
    
    game_mode_options_.player_order="01";
    
  }


} //namespace thetuce
