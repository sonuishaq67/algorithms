#!/bin/bash

cd build

check_sorts() {

    input="100 689 485 684 330 71 716 733 292 627 62 737 146 463 999 587 421 246 35 255 369 490 291 662 500 602 159 235 422 73 924 910 775 71 987 31 960 418 150 321 146 216 729 263 153 56 198 717 258 427 891 816 934 865 424 401 338 403 185 384 524 524 947 308 983 604 913 223 364 567 11 792 460 10 115 472 757 535 322 765 853 646 988 390 845 390 504 870 945 477 125 471 525 793 261 21 591 132 6 547 863"
    sub_to_check="Sorted array is 6 10 11 21 31 35 56 62 71 71 73 115 125 132 146 146 150 153 159 185 198 216 223 235 246 255 258 261 263 291 292 308 321 322 330 338 364 369 384 390 390 401 403 418 421 422 424 427 460 463 471 472 477 485 490 500 504 524 524 525 535 547 567 587 591 602 604 627 646 662 684 689 716 717 729 733 737 757 765 775 792 793 816 845 853 863 865 870 891 910 913 924 934 945 947 960 983 987 988 999"
    for sorts in "insort" "mergesort" "selsort" "heap-sort"; do
        temp=$(echo $input | ./${sorts})
        if [[ "$temp" == *"$sub_to_check"* ]]; then
            echo "${sorts} pass"
        else
            echo "${sorts} failed"
            exit 128
        fi
    done

}

check_simple_problems() {
    input="a group of words containing a subject and a verb, that expresses a statement, a question, etc. When a sentence is written it begins with a big (capital) letter and ends with a full stop"
    sub_to_check="stop full a with ends and letter (capital) big a with begins it written is sentence a When etc. question, a statement, a expresses that verb, a and subject a containing words of group a"
    temp=$(echo $input | ./reverse_words)
    if [[ "$temp" == *"$sub_to_check"* ]]; then
        echo "reverse_words pass"
    else
        echo "reverse_words failed"
        exit 128
    fi

    input="20 8 2 1 6 2 5 0 2 5 9 2 9 3 6 9 10 10 10 5 5 10"
    sub_to_check="4"
    temp=$(echo $input | ./pair_sum)
    if [[ "$temp" == *"$sub_to_check"* ]]; then
        echo "pair_sum pass"
    else
        echo "pair_sum failed"
        exit 128
    fi
}

check_graphs() {
    input=""
    sub_to_check="Adjacency list of vertex 0
 head -> 1-> 4

 Adjacency list of vertex 1
 head -> 0-> 2-> 3-> 4

 Adjacency list of vertex 2
 head -> 1-> 3

 Adjacency list of vertex 3
 head -> 1-> 2-> 5

 Adjacency list of vertex 4
 head -> 0-> 1

 Adjacency list of vertex 5
 head -> 3"
    for graphs in "simple_graph"; do
        temp=$(echo $input | ./${graphs})
        if [[ "$temp" == *"$sub_to_check"* ]]; then
            echo "${graphs} pass"
        else
            echo "${graphs} failed"
            exit 128
        fi
    done
}

check_sorts
check_simple_problems
check_graphs