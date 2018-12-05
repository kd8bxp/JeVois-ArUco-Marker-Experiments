# JeVois Camera Experiments with ArUco Markers

This project is my attempt to duplicate some of the projects from  
JeVois site, following this tutorial:  
http://jevois.org/tutorials/UserRobotCar.html  

## Information

For both versions of my robot I used a L298 motor driver because that is what I had handy. Otherwise the hardware is roughly the same.  
Follow: version 1 was based on the code from the JeVois site, with many changes, and did not work correctly. For this robot I didn't use the Tilt function of the robot, the robot used only two wires per motor (not the three wire setup JeVois used), I was able to get the pan to work correctly, but could never get the robot to follow the ArUco Marker.  
Follow version 2 - was a lot closer to the original JeVois robot, with the biggest difference being a four wheel drive robot chassis. (Which really works like a two wheel drive robot.) For this version I used three wires per motor, (two for direction, and one for speed). I also used the tilt function, which I had to modify the code slightly to get the tilt to follow the marker. The only other small change was pin numbers for the motor (I could have just moved the wires, but easy to change in software). Version 2 appears to work correctly.   

## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Support Me

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  
https://www.paypal.me/KD8BXP  

## Other Projects

https://www.youtube.com/channel/UCP6Vh4hfyJF288MTaRAF36w  
https://kd8bxp.blogspot.com/  


## Credits

Copyright (c) 2018 LeRoy Miller

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>
