# image_persistent

LMS module that proxies image datachannels. The module has two states:
- live image: copy the input image to the output image in every cycle
- persistent image: do not change the output image and ignore contents in input image

## Configuration for ogre_input
````xml
<module>
  <name>ogre_input</name>
  <config>
    <WINDOW>WINDOW</WINDOW>
    <key>
      <down>
        <space>
          <command>image_persistent</command>
          <content>toggle</content>
        </space>
      </down>
    </key>
  </config>
</module>
````

## Recommended modules
- [ogre_input](https://github.com/syxolk/ogre_input) - is needed to toggle persistent/live image

## Dependencies
- [imaging](https://github.com/syxolk/imaging)
