import subprocess

#cmd = "ls | head -n 5"
cmd = "ls -lt"
#cmd = "head -n 5 sample.py"
subprocess.call(cmd, shell=True)
print()
print("*****")

ret = subprocess.check_output(cmd.split(" ")).decode('utf-8')
print(ret)
