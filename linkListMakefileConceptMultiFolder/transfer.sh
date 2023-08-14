#scp -r /home/abodh/PureSoftware/PS_Abodh/linkList/arm/linkList/linkListMakefileConceptMultiFolder akhil@192.168.3.42:/home/akhil/freshers/abodh
#! /bin/bash
#this is a comment
# echo "helloWorld"

# echo $BASH

# user=ssh 
# name=akhil

# ip=@192.168.3.42

# echo $user
# echo $name
# echo $ip

# read name ip
# scp -r $PWD "$name@192.168.$ip:/home/akhil/freshers/abodh"

#!/bin/bash

# This is a simple loop that prints numbers from 1 to 5
#!/bin/bash

# Outer loop
#!/bin/bash

# # Outer loop using a counter variable
# for ((i=1; i<=3; i++))
# do
#     echo "Outer Loop: Iteration $i"

#     # Inner loop using a counter variable
#     for ((j=1; j<=i; j++))
#     do
#         echo "Inner Loop: Iteration $j"
#     done
#     echo -e
# done

# echo "Nested loop example finished!"


#!/bin/bash

echo -n "enter string: "
read input_string
length=${#input_string}

is_palindrome=true
for((i=0;i<length/2;i++));
do
    left_char="${input_string:$i:1}"
    right_char="${input_string:$((lenght-i-1)):1}"
   
     echo -n "$left_char" 
     echo  -n "$right_char"
    if [ "$left_char" != "$right_char" ]; then
            
            is_palindrome=false
    fi
done

if [ "$is_palindrome" = true ]; then
    echo "is_palindrome"
else
    echo "Not palindrome"
fi

