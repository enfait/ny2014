#!/bin/bash

source `dirname $0`/common.sh

chmod +x $LOCAL_DIR/*.sh

$LOCAL_DIR/clean.sh

version="jenkins-$BUILD_NUMBER"

$LOCAL_DIR/versionize.sh $version

$LOCAL_DIR/make.sh

if [ $? -ne 0 ] ; then
  echo "Make step failed"
  exit 1
fi

#$LOCAL_DIR/checkstyle.sh jenkins


