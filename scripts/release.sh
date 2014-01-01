#!/bin/bash

version=$1

if [ -z $version  ] ; then
  echo "usage $0 <version>"
  exit 1
fi

source `dirname $0`/common.sh
chmod +x $LOCAL_DIR/*.sh

$LOCAL_DIR/clean.sh

$LOCAL_DIR/versionize.sh $version

$LOCAL_DIR/make.sh

if [ $? -ne 0 ] ; then
  echo "Make step failed"
 exit 1
fi

release_name="${PROJECT_NAME}-${version}"

echo Release $release_name

transform="s,^\.,${PROJECT_NAME}-${version},"

echo $transform


mkdir -p ${PROJECT_DIR}/build
cd $WWW_DIR
tar_cmd="tar --show-transformed-names --transform ${transform} -v -c -z -f ${PROJECT_DIR}/build/${release_name}.tar.gz ."
echo $tar_cmd
$tar_cmd



