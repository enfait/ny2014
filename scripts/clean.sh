#!/bin/bash

source `dirname $0`/common.sh

echo "** Clean Drupal project in $WWW_DIR"

shopt -s extglob

pushd $WWW_DIR

rm -rf !(sites|profiles|*.make)

if [ -d profiles ] ; then

  pushd profiles

  rm -rf !($PROJECT_NAME)

  if [ -d $PROJECT_NAME ] ; then

    pushd $PROJECT_NAME

      rm -rf modules/contrib
      rm -rf themes/contrib
      rm -rf libraries

    popd

  fi

  popd

fi

if [ -d sites ] ; then

  pushd sites

  rm -rf !(default)

  popd

fi


