CHAPTERS='01 02 03 04 05 06 07 08 09 10 11 12 13 14'

for CHAPTER in $CHAPTERS; do
	make CHAPTER=$CHAPTER 2>/dev/null || break
done

for f in $CHAPTERS; do
	"compiled/$f" || break
done
