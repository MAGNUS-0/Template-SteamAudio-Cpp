#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>

#include "phonon.h"

using namespace std;

int main () {

    // The full STEAMAUDIO_VERSION macro doesn't like to be built here :)
    cout << "SteamAudio Version: " 
    << STEAMAUDIO_VERSION_MAJOR << "."
    << STEAMAUDIO_VERSION_MINOR << "."
    << STEAMAUDIO_VERSION_PATCH << endl;

    // Just a sample to show it loads the library and finds the symbols correctly...
    IPLhandle context{nullptr};
    iplCreateContext(nullptr, nullptr, nullptr, &context);
    auto const samplingrate = 44100;
    auto const framesize    = 1024;
    IPLRenderingSettings settings{ samplingrate, framesize };

    // Do your stuff here :)    

    iplDestroyContext(&context);
    iplCleanup();

    cout << "Congrats! You built an output linked with the SteamAudio C API!" << endl;

    return 0;
}