#!/bin/bash
export DEST="./.exvim.foobar"
export TOOLS="/mnt/c/Users/lixin/main/vimfiles/tools/"
export TMP="${DEST}/_inherits"
export TARGET="${DEST}/inherits"
sh ${TOOLS}/shell/bash/update-inherits.sh
