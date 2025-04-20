# This program will print its own source to Grace_kid.py
FILE_NAME = "Grace_kid.py"
D_QUOTE = chr(34)
NEWL = chr(10)
TAB = chr(9)

def happy_grace():
	code = "# This program will print its own source to Grace_kid.py{1}FILE_NAME = {2}Grace_kid.py{2}{1}D_QUOTE = chr(34){1}NEWL = chr(10){1}TAB = chr(9){1}{1}def happy_grace():{1}{3}code = {2}{0}{2}{1}{3}with open(FILE_NAME, {2}w{2}) as file:{1}{3}{3}file.write(code.format(code, NEWL, D_QUOTE, TAB)){1}{1}happy_grace(){1}"
	with open(FILE_NAME, "w") as file:
		file.write(code.format(code, NEWL, D_QUOTE, TAB))

happy_grace()
