rm build/ -rf
mkdir build
cd build
cmake ../cpp
make
mv hello.js ../web/gen/
mv hello.wasm ../web/gen/