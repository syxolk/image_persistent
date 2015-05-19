# image_persistent

LMS module that proxies image datachannels.

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
