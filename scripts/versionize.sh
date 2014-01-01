#!/bin/bash

version=$1

if [ -z $version  ] ; then
  echo "usage $0 <version>"
  exit 1
fi

source `dirname $0`/common.sh
chmod +x $LOCAL_DIR/*.sh


function append_info_version {

  file=$1
  version=$2
  version_line="version = ${version}"

  addendum=`cat << EOF
# Added by versionize
version: ${version}
EOF`
#  echo "append $addendum in file $file"
  echo -e "\n${addendum}" >> $file

}

export -f append_info_version
if [ -d $WWW_DIR/$PROFILE_DIR/modules/$PROJECT_NAME ] ; then
  find $WWW_DIR/$PROFILE_DIR/modules/$PROJECT_NAME -name '*.info.yml' -exec bash -c "append_info_version {} $version" \;
fi
if [ -d $WWW_DIR/$PROFILE_DIR/themes/$PROJECT_NAME ] ; then
  find $WWW_DIR/$PROFILE_DIR/themes/$PROJECT_NAME -name '*.info.yml' -exec bash -c "append_info_version {} $version" \;
fi
find $WWW_DIR/$PROFILE_DIR/$PROJECT_NAME.info.yml -exec bash -c "append_info_version {} $version" \;
