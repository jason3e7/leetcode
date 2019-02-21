# solution 1
sed -n '10,10p' file.txt

# solution 2
sed "10q;d" file.txt 

# solution 3 error
#cat file.txt | head -10 | tail -1

# solution 4 error
#head -10 file.txt | tail -1

# solution 5
awk 'NR == 10' file.txt

# solution 6
sed -n 10p file.txt

# solution 7
tail -n +10 file.txt | head -1
