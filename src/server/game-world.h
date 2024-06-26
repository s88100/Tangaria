/*
 * File: game-world.h
 * Purpose: Game core management of the game world
 */

#ifndef GAME_WORLD_H
#define GAME_WORLD_H

#define SERVER_SAVE     10      /* Minutes between server saves */
#define SERVER_PURGE    24      /* Hours between server purges */
#define GROW_CROPS      5000    /* How often to grow a bunch of new vegetables in wilderness */
#define GROW_TREE       5000    /* How often to grow a new tree in towns */

/*
 * Time bubble scale factors in percentage terms
 */
#define MAX_TIME_SCALE  1000
#define MIN_TIME_SCALE  10
#define RUNNING_FACTOR  500 /* Increase time by this percentage when running */
#define NORMAL_TIME     100 /* 100% */

#define INHIBIT_DEPTH   -100

#define TURN_BASED (cfg_turn_based && (NumPlayers == 1))

extern bool server_generated;
extern bool server_state_loaded;
extern uint32_t seed_flavor;
extern hturn turn;

extern bool is_daytime_turn(hturn *ht_ptr);
extern bool is_daytime(void);
extern void dusk_or_dawn(struct player *p, struct chunk *c, bool dawn);
extern int turn_energy(int speed);
extern int frame_energy(int speed);
extern void run_game_loop(void);
extern void kingly(struct player *p);
extern bool level_keep_allocated(struct chunk *c);
extern void play_game(void);
extern void shutdown_server(void);
extern void exit_game_panic(void);
#ifdef WINDOWS
extern void setup_exit_handler(void);
#else
extern void signals_init(void);
#endif

#endif /* GAME_WORLD_H */
