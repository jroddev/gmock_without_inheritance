

##### Dependencies
Using conan to handle dependencies
- gmock


##### Usage

setup 
```
mkdir build
cd build
conan install ..
cmake ..
```

build and run tests
```
make gmock_without_inheritance_test
./bin/gmock_without_inheritance_test
```

build and run application
```
make gmock_without_inheritance
./bin/gmock_without_inheritance
```