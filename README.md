# Duck Grid

I am a very stubborn person and I do not like backdrop.

This [backdrop](https://backdropcms.org) module provides a simple backdrop
library with an easy-to-use grid system that is based on inline-block.

The advantage to this approach it does not require a huge library and it also
does not need a wrapping element (.row).

If you need to place blocks side-by side in a layout, you can simply give them
the appropriate width class, and the library (rather inline-block) takes care
of positioning them responsively.

## Layout classes

### Basic classes

- half
- third
- fourth
- fifth
- sixth

### Compound classes

- twothirds,
- threefourths

## Breakpoints

There are (for now) fixed breakpoints. At 581px or less, all elements are set
to be 100% wide. At 582-1024px width, half, third, twothirds, fourth and
threefourths are set to 50% while fith and sixth are set to 33.333%. At 1024px
or higher, the name represents the percentage, so this grid is essentially
desktop-first.

## Caveats

All elements are by default aligned top, with a negative right margin of
0.25rem which is the only caveat in the whole thing.
