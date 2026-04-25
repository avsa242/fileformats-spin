/*
 *
 * fsadapter.c
 *  based on code originally written by Wuerfel_21
 *  
 */


#include <compiler.h>
#include <dirent.h>
#include <sys/stat.h>

char *dirent_name(struct dirent *d) {
/* Get a directory entry's filename */
    return d->d_name;
}


int dirent_type(struct dirent *d) {
/* Get a directory entry's file type */
    switch(d->d_type) {
        case DT_REG:                            // regular file
            return 2;
        case DT_DIR:                            // directory
            return 1;
        default:                                // invalid
            return 0;
    }
}


int path_type(const char *path) {
/* Get the type of entry based on its given path */
    struct stat buf;
    if ( !stat(path, &buf) ) {
        if ( S_ISDIR(buf.st_mode) ) return 1;   // directory
        if ( S_ISREG(buf.st_mode) ) return 2;   // regular file
    }
}


int exists(const char *path) {
/* Check if a file exists */
    struct stat buf;
    return stat(path, &buf) == 0;
}

