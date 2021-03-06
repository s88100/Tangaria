/*
 * File: c-option.h
 * Purpose: Options table and definitions.
 */

#ifndef INCLUDED_C_OPTIONS_H
#define INCLUDED_C_OPTIONS_H

/*
 * Functions
 */
extern bool option_set(bool *opts, const char *opt, size_t val);
extern void options_init_defaults(struct player_options *opts);
extern bool options_save_custom_birth(bool *opts);
extern bool options_restore_custom_birth(bool *opts);
extern void options_reset_birth(bool *opts);
extern void init_options(bool *opts);

#endif /* INCLUDED_C_OPTIONS_H */
