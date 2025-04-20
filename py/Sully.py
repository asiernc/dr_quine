import os
def happpy_sully():
	i = 5
	if i <= 0: return 0
	i -= 1
	code = "import os{2}def happpy_sully():{2}{1}i = {4}{2}{1}if i <= 0: return 0{2}{1}i -= 1{2}{1}code = {3}{0}{3}{2}{1}filename = f'Sully_{{i}}.py'{2}{1}with open(filename, {3}w{3}) as f:{2}{1}{1}f.write(code.format(code, chr(9), chr(10), chr(34), i)){2}{1}os.system(f'python3 {{filename}}'){2}{2}happpy_sully(){2}"
	filename = f'Sully_{i}.py'
	with open(filename, "w") as f:
		f.write(code.format(code, chr(9), chr(10), chr(34), i))
	os.system(f'python3 {filename}')

happpy_sully()
