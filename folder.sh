i=100
while [ $i -gt 0 ]
do
	touch "$i.py"
	((i--))
done
