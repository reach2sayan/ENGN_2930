#!/bin/bash

grep "Etotal" Si_out.txt | awk '{print $3}' > Etotal
awk '{$1 = $1 + 8.87713655983975E+00}' Etotal > Ediff
paste pert_mag.txt Ediff | awk '{print $2 $3}' > table