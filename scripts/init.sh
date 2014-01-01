#!/bin/bash

source `dirname $0`/common.sh

echo "** Install Drupal project in $WWW_DIR"

pushd $WWW_DIR
drush si $PROJECT_NAME -y --site-name="$PROJECT_NAME dev" --account-pass=admin
popd
