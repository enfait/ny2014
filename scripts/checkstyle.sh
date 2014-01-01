#!/bin/bash

source `dirname $0`/common.sh

PHPCS=`which phpcs`

if [ ! -x ${PHPCS} ] ; then
  echo "phpcs not available"
  exit 1;
fi


echo "** CheckStyle Drupal project in $WWW_DIR"

REPORT="full"

if [ "${1}Z" == "jenkinsZ" ] ; then
  REPORT="checkstyle"
  OUTPUT="${PROJECT_DIR}/scripts/checkstyle.xml"
fi

DIRECTORIES="${WWW_DIR}/${PROFILE_DIR}/modules/${PROJECT_NAME}"

if [ -d "${WWW_DIR}/${PROFILE_DIR}/themes/${PROJECT_NAME}" ] ; then
  DIRECTORIES="$DIRECTORIES ${WWW_DIR}/${PROFILE_DIR}/themes/${PROJECT_NAME}"
fi

CMD="phpcs --standard=Drupal --report=${REPORT} --extensions=php,module,inc,install,test,profile,theme $DIRECTORIES"

if [ "${1}Z" == "jenkinsZ" ] ; then
  $CMD > ${LOCAL_DIR}/checkstyle-result.xml
  RETURNVAL=$?
else
  $CMD
  RETURNVAL=$?
fi



