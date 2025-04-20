def quine(s):
	print(s.format(s))

def main():
	# This is a comment inside main
	s = 'def quine(s):\n\tprint(s.format(s))\n\ndef main():\n\t# This is a comment inside main\n\ts = {!r}\n\tquine(s)\n\n# This is a comment outside main\nif __name__ == "__main__":\n\tmain()'
	quine(s)

# This is a comment outside main
if __name__ == "__main__":
	main()
