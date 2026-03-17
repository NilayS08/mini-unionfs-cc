#ifndef PATHS_H
#define PATHS_H

#include <limits.h>

/*
 * Return values for layer detection
 */
typedef enum {
    LAYER_LOWER = 0,
    LAYER_UPPER = 1
} layer_t;

/*
 * Resolves a path to actual file location
 * Returns:
 *   LAYER_UPPER → file in upper_dir
 *   LAYER_LOWER → file in lower_dir
 *   -ENOENT → file does not exist
 */
int resolve_path(const char *path, char *resolved_path);

/*
 * Helper functions
 */
int get_upper_path(const char *path, char *out);
int get_lower_path(const char *path, char *out);

#endif