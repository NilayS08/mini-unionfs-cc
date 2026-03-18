#ifndef UNIONFS_H
#define UNIONFS_H

#define FUSE_USE_VERSION 31

#include <fuse3/fuse.h>
#include <limits.h>

/*
 * Global state for the filesystem
 * Stores paths for both layers
 */
struct mini_unionfs_state {
    char lower_dir[PATH_MAX];   // read-only layer
    char upper_dir[PATH_MAX];   // writable layer
    char mount_dir[PATH_MAX];   // mount point
};

/*
 * Macro to access global state anywhere
 */
#define UNIONFS_DATA ((struct mini_unionfs_state *) fuse_get_context()->private_data)

#endif