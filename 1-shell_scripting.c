#!/bin/bash
path="$1"

find "$path".* -type f -name "1-section_4.txt" -exec sed -i.b
