#!/bin/bash

if [ $# -eq 0 ]; then
    echo "missing comment"
    exit
fi

echo "Pushing changes..."

DIR=$PWD
git add .
git commit -m "simpleapp : $1"

CHANGES=$(git cherry -v | wc -l)

if [ $CHANGES -eq 0 ]; then
    echo "No pendent changes to push"
else
    git push
fi

cd $DIR

echo "Done"
