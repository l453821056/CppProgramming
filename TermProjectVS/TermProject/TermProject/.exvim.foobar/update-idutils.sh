#!/bin/bash
export DEST="./.exvim.foobar"
export TOOLS="/mnt/c/Users/lixin/main/vimfiles/tools/"
export TMP="${DEST}/_ID"
export TARGET="${DEST}/ID"
sh ${TOOLS}/shell/bash/update-idutils.sh
