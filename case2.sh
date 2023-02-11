#!/bin/sh

echo "linux is fun? ( yes | no )"
read answer
case $answer in
	yes | y | Yes | YES )
		echo "다행이다"
		echo "열심히해";;
	[nN]* )
		echo "안타깝다";;
	*)
		echo "yes 아니면 no만 입력"
		exit 1;;
esac
exit 0

