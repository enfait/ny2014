#!/bin/bash

source `dirname $0`/common.sh

ROOT_PASSWORD_FILE="/mysql-root-pw.txt"
ROOT_PASSWORD=`cat $ROOT_PASSWORD_FILE`

echo "GRANT ALL PRIVILEGES ON legacy.* TO legacy@localhost IDENTIFIED BY 'legacy'" | mysql -u root -p${ROOT_PASSWORD}
echo "FLUSH PRIVILEGES" | mysql -u root -p${ROOT_PASSWORD}
echo "CREATE DATABASE legacy" | mysql -u legacy -plegacy

dumps_dir="$PROJECT_DIR/legacy"

latest_dump=$(ls "$dumps_dir" -t1 | head -n1)

unzip -p $dumps_dir/$latest_dump | mysql -u legacy -plegacy legacy