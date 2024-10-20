# C++ Project Template with Conan and Qt

This is a a template project which can be used as a starter base to create a C++ project with the Conan package manager and Qt6.

# Compilation instructions

## First installation of dependencies

```
# Conan installation
pip3 install -q --no-cache-dir conan conan-package-tools
mkdir ~/.conan

# Qt6 installation
sudo apt install qt6-base-dev
```

## Compilation

```
mkdir build
cd build

# Generate the Find cmake for Conan packages
conan profile new autodetect --detect --force
conan install ../conanfile.txt -pr autodetect -s compiler.libcxx=libstdc++11 --build missing

# Generate Makefiles
cmake ../ -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=${PWD}

# compile
make 

# run
./src/mainwindow
```