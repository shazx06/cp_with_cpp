if $(find . -type f !  \(   -iname *.cpp -o ! -iname *.txt -o ! -iname *.sh \) )
then
echo "binary and .o files are removed successfully....."

else
	echo "$?"
fi