#!/bin/bash


for i in {1..21}
do
    s="Si_out.txt"    
    if [ $i -lt 10 ]; then
	s=$s"000"$i
    else
	s=$s"00"$i
    fi
    echo $s
    res=`grep "Etotal" $s` 
    res=$res" ---> "$s
    echo $res >> ecut_optimise.txt
done
s="Si_out.txt"
grep "Etotal" $s | cat >> ecut_optimise.txt