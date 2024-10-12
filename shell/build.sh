sh ./lib/build_lib.sh
cmake -B build . --fresh -DCMAKE_BUILD_TYPE=Debug
# cmake -G "Xcode" -B build-xcode . --fresh
cmake --build build --target run_with_leaks
# cmake --build build-xcode --target Project