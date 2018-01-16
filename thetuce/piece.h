#ifndef THERULL_THETUCE_PIECE_H_
#define THERULL_THETUCE_PIECE_H_

namespace thetuce {

struct Proprieties {
  int type_id;
  Player owner;
  bool can_move;
  std::vector< std::tuple<> > move;
  std::vector< std::tuple<> > first_move;
  bool can_be_moved_into;
  int can_jump;
  bool creates_ghost;
  bool ghost_on_original_square;
  int ghost_duration;
  bool ghost_on_original_square;
  int ghost_lifetime;
  bool can_capture;
  std::vector< std::tuple<> > capture;
  bool can_be_captured;
  int can_jump_while_capturing;
  bool must_jump_while_capturing
};

class Piece {
 public:

}

} //namespace thetuce

#endif //THERULL_THETUCE_PIECE_H_