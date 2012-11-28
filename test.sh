#!/bin/bash



make clean
echo ""
make


echo ""

./tinyjpeg ../test_images/earth-8k.jpg ../test_images/earth-8k.tga

cd ../test_images/
md5sum --check earth-8k.md5
