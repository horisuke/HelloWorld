import subprocess

#cmd = "ls | head -n 5"
cmd0 = "pwd"
cmd = "ls -lt"
#cmd = "head -n 5 sample.py"
subprocess.call(cmd0, shell=True)
subprocess.call(cmd, shell=True)

print()
print("*****")
print()

ret0 = subprocess.check_output(cmd0.split(" ")).decode('utf-8')
ret = subprocess.check_output(cmd.split(" ")).decode('utf-8')
print(ret0)
print(ret)
