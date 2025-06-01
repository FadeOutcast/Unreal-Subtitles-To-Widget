# SubtitlePlugin

Developed with Unreal Engine 5.1.1. Can be ported to newer versions with minor (if any) changes.

Plugin allows unreal's built in subtitles to be exposed to blueprints. This is mainly to show subtitles through your own widget, allowing for better customizability like text color, size and changing the font in runtime.

An example of how to use the delegate with a text block

![image](https://github.com/user-attachments/assets/5932d1eb-a5e1-462d-8a20-50a5ed9a2a7e)


The delegate can be accessed globally using the custom subtitle subsystem as shown above.

**Important: You need to set the subtitles in all the SoundWaves to 'single line' and 'Manual Word Wrap', otherwise all the subtitles will display instantly.**

![image](https://github.com/user-attachments/assets/c7cf7696-04ba-4092-a531-533fadaec3d0)


**Important 2: Using this plugin overrides the original subtitle system, so subtitles will no longer display through unreals subtitle display at the bottom. Usually you'd want to display them through your own widget.**
