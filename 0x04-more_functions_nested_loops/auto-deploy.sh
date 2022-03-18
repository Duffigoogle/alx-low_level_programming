#!/bin/bash
git add -A
read -p 'Enter your desired commit message: ' message
git commit -m "${message}"
git push -u
echo completed
