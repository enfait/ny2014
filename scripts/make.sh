#!/bin/bash

source `dirname $0`/common.sh

echo "** Build Drupal project in $WWW_DIR"

pushd $WWW_DIR
drush make drupal-core.make -y 2>&1 | tee $LOCAL_DIR/drush.log
grep  "\[error\]" $LOCAL_DIR/drush.log
if [ $? -eq 0 ] ; then
  echo "drush make failed"
  exit 1
fi
grep  "\[warning\]" $LOCAL_DIR/drush.log
if [ $? -eq 0 ] ; then
  echo "drush make failed"
  exit 1
fi
cd $PROFILE_DIR
drush make --no-core --contrib-destination $PROJECT_NAME.make -y 2>&1 | tee $LOCAL_DIR/drush.log
grep  "\[error\]" $LOCAL_DIR/drush.log
if [ $? -eq 0 ] ; then
  echo "drush make failed"
  exit 1
fi
grep  "\[warning\]" $LOCAL_DIR/drush.log
if [ $? -eq 0 ] ; then
  echo "drush make failed"
  exit 1
fi
popd
