# cmdjudge
A simple command line code judge

[![MIT licensed](https://img.shields.io/badge/license-MIT-blue.svg)](https://raw.githubusercontent.com/prdpx7/cmdjudge/master/LICENSE)
[![PyPI version](https://badge.fury.io/py/cmdjudge.svg)](https://badge.fury.io/py/cmdjudge)
[![Code Health](https://landscape.io/github/prdpx7/cmdjudge/master/landscape.svg?style=flat)](https://landscape.io/github/prdpx7/cmdjudge/master)

## Installation
* from PyPI
```
pip install cmdjudge
```
* with curl
```
bash -c "$(curl -fsSL https://raw.githubusercontent.com/prdpx7/cmdjudge/master/install.sh)"
```

## Usage
```
$ cmdjudge --help
Usage: [-h] [-t TIME-LIMIT ] [-s SOURCE-CODE ] [-i INPUT-FILE] [-c CORRECT-OUTPUT-FILE ]

Optional Arguments:

-h , --help : show this help message and exit
-t TIME-LIMIT , --time-limit TIME-LIMIT : max time-limit required for source code to execute[Default time-limit(if didn't specified in arg) is 1-sec]
-s SOURCE-CODE, --source-code SOURCE-CODE : valid path for c/cpp/py/java source code
-i INPUT-FILE, --input-file INPUT-FILE : input testcase file required
-c CORRECT-OUTPUT-FILE, --correct-output-file CORRECT-OUTPUT-FILE : correct output file, which will be judged with user output file
```

## Demo
```
$ cmdjudge -s A.cpp -i inp.txt -c correctout.txt
Accepted
$ cmdjudge --source-code A.java --input-file inp.txt --correct-output-file correctout.txt --time-limit 0.34
Time Limit Execced
```
![demo](https://i.imgur.com/inUpV2O.gif)
