# Website-Forwader
Website-Forwaders for your 3ds's homemenu!

(This guide is meant for Windows Users)

## Steps to build for your own sites

-----------

### Requirements:-
  * Devkitpro & ctrulib
    * [*Steps for setting up devkitpro & ctrulib on Windows*](https://www.3dbrew.org/wiki/Setting_up_Development_Environment#Windows)
    * [*Steps for setting up devkitpro & ctrulib on Unix-like platforms*](https://www.3dbrew.org/wiki/Setting_up_Development_Environment#Unix-like_platforms)
    
  * A 48x48 icon named as `icon.png`
  
  * A 256x128 banner named as `banner.png`
  
  * An audio file(wav) less than 3 second named as `banner.wav`

-----------

### Steps:-
1. Copy the `banner.wav`, `banner.png` and `icon.png` to the `assets` folder.

2. Open the `makefile` using your favourite text editor
  
    In `APP_UNIQUE_ID   :=  0x6890` replace `0x6890` with a hex string *(for example:- 0x90887)*
    
    In `BUILD_LINK		:=  https://reddit.com/r/3dshacks` replace `https://reddit.com/r/3dshacks` with the link you want to make the forwarder for (Example:- `https://gbatemp.net`)  

3. Open the cmd(Command Prompt) and then type in `make` 

4. Copy the generated `website-forwarder.cia` to your 3ds and install it using FBI. **(Restart your 3ds:-This is IMPORTANT)**

5. Enjoy!

-----------

## Note

This may not work sometimes(nothing would be displayed on screen). In this case, you will need to restart your 3ds.

Make sure you type in `make clean` in the cmd before trying to generate a forwarder for another link.

Always have a protocol attached to the link for which you are trying to generate a forwarder(For eg:- `https://reddit.com/r/3dshacks` would work whereas only `reddit.com/r/3dshacks` would not work.)

Don't remove any line in `main.c` or the program will **not** work.

-----------

## Credits

Thanks to all the people who worked on ctrulib.

----------
