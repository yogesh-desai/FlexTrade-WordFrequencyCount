# FlexTrade-WordFrequencyCount [![Build Status](https://travis-ci.org/yogesh-desai/FlexTrade-WordFrequencyCount.svg?branch=master)](https://travis-ci.org/yogesh-desai/FlexTrade-WordFrequencyCount)

It is simple code which reads the input.txt file and counts the frequency of the file types and returns the largest file type count.
It generates the output.txt as output of the code.

## Usage

```
$ g++ FlexTrade.cpp -o flex
$ ./flex


```

## Input file contents looks like as below.

```
root, directory, 128, admin, NONE
users, directory, 512, admin, root
navin, directory, 1024, navin, users
navin.jpg, photo, 128000, navin, navin
Project.doc, document, 256000, navin, navin
Sholay.mpg, video, 4123456123, navin, navin
amit, directory, 128, amit, users
Resume.doc, document, 256000, amit, amit

```

For above input file below will be the output file contents.

```
4

```

## ToDo
There are many things can be done. This is very basic example to show usage of Map and Vectors, Template classes in `cpp`.