#!/bin/bash
export DEST="./.exvim.foobar"
export TOOLS="/mnt/c/Users/lixin/main/vimfiles/tools/"
export TMP="${DEST}/_symbols"
export TARGET="${DEST}/symbols"
sh ${TOOLS}/shell/bash/update-symbols.sh
