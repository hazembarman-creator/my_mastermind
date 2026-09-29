// game_logic.h
#ifndef GAME_LOGIC_H
#define GAME_LOGIC_H

int count_well_placed_pieces(const char *secret, const char *guess);
int count_misplaced_pieces(const char *secret, const char *guess);

#endif