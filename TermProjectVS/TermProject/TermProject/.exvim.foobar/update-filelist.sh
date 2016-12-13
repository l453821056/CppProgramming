#!/bin/bash
export DEST="./.exvim.foobar"
export TOOLS="/mnt/c/Users/lixin/main/vimfiles/tools/"
export IS_EXCLUDE=
export FOLDERS="_readme"
export FILE_SUFFIXS="cpp|h"
export TMP="${DEST}/_files"
export TARGET="${DEST}/files"
export ID_TARGET="${DEST}/idutils-files"
bash ${TOOLS}/shell/bash/update-filelist.sh
