#!/bin/sh

git add --all
read -p "Enter commit message: " message
git commit -m "$message"
git push origin
