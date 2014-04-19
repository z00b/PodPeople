#!/bin/sh

for id in `ls -1 /Users/rzuber/.ssh/id_*`
do
  cat $id
done
