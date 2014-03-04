UIImage-Resize (Magick!)
========================

Resizing UIImage on iOS should be simple. This category provides a simple, yet flexible syntax to resize any image to your needs.

```objective-c
  - (UIImage *) resizedImageByMagick:  (NSString *) spec;
```

where **spec** could be one of the following expressions (follows ImageMagick syntax conventions):

- [width] -- resize by width, height automatically selected to preserve aspect ratio.
- x[height] -- resize by height, width automagically selected to preserve aspect ratio.
- [width]x[height] -- maximum values of height and width given, aspect ratio preserved.
- [width]x[height]^ -- minimum values of height and width given, aspect ratio preserved.
- [width]x[height]! -- width and height emphatically given, original aspect ratio ignored.
- [width]x[height]# -- scale and crop to exactly that size, original aspect ratio preserved (you probably want this one for your thumbnails).

Example:

```objective-c
  UIImage* resizedImage = [image resizedImageByMagick: @"320x320#"];
```

Caveat
------

There is some support for orientations (not mirrored still). There is no support for scale (do we need it?), so please define pixel values.

The project uses ARC, so you should compile UIImage-Resize.m with ```-fobjc-arc``` if your project is not using ARC.

Additional methods:
-------------------

If you need some resizing with data known on-the-fly, this category defines the following additional methods:

```objective-c
  - (UIImage *) resizedImageByWidth:  (NSUInteger) width;
  - (UIImage *) resizedImageByHeight: (NSUInteger) height;
  - (UIImage *) resizedImageWithMaximumSize: (CGSize) size;
  - (UIImage *) resizedImageWithMinimumSize: (CGSize) size;
```
