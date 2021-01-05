#!/bin/sh

contest_name=$1
problem_name=$2
test_dir=test/${problem_name}

if [ ! -e ${test_dir} ]; then
    oj dl -d test/${problem_name} https://atcoder.jp/contests/${contest_name}/tasks/${contest_name//-/_}_${problem_name}
fi

g++ ${problem_name}.cpp
oj test -c "./a.out" -d test/${problem_name}