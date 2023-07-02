import subprocess
import os

if not os.path.exists("./build") :
    cmd_mk_build_dir = "mkdir build"
    subprocess.run(cmd_mk_build_dir, shell= True, check=True)

cmd_generate_build_sys = "cmake -S . -B ./build"
subprocess.run(cmd_generate_build_sys, shell=True, check=True)

cmd_build_exe = "cmake --build ./build"
subprocess.run(cmd_build_exe, shell=True, check=True)

os.chdir("./build")
os.system("./main")