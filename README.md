# Template Project SteamAudio : C-API

I have notice there are no sample projects for getting started with the C-API, so I thought I would make one here as a starting point for the project/build settings :)

# Getting Started
Please first clone this repo. To build, only **CMake** is used.

Before building, make sure you have downloaded (and un-zipped) the [SteamAudio C API](https://valvesoftware.github.io/steam-audio/downloads.html), into a folder at the root level of this repository. 

*The latest version can also be downloaded from the [GitHub repository tags/releases page](https://github.com/ValveSoftware/steam-audio/releases).*

I have simplified the setup of this to avoid any confusion, the configuration, building and running of the application can be completed by running:

```
>> chmod +x buildrun.sh
>> ./buildrun.sh
```

This will:
- Authorize your user on MacOS/Unix operating systems to run the build file
- Create a build folder
- Configure CMake files within this build folder
- Run the CMake build
- Run the application built by CMake

Once this builds and runs, from then on you can simply use:

```
>> ./buildrun.sh
```

**Note: This is currently only supported for MacOS, other OS support could be added if it is requested.**

# Disclaimer
This project is just a starting point of how *I thought I would use the SteamAudio C-API* and is not necessarily how the authors decided it should be used.

Please feel free to modify the build system to suit your needs, and it would be cool to be made aware of any projects this is used in!

# Licensing
This project is solely meant as a starting point for using the SteamAudio API and is made by an independent 3rd Party (myself) and not by the original library authors/creators.

For further information regarding licensing, please see the official SteamAudio API [LICENSE.md](https://github.com/ValveSoftware/steam-audio/blob/master/LICENSE.md) file, or the [GitHub repository](https://github.com/ValveSoftware/steam-audio).

## Additional Relevant Links
[SteamAudio Generated C-API Docs](https://valvesoftware.github.io/steam-audio/doc/capi/index.html)

[SteamAudio API Website](https://valvesoftware.github.io/steam-audio/)

[SteamAudio API GitHub](https://github.com/ValveSoftware/steam-audio)

