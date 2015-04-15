
@interface NSGlyphGenerator : NSObject {

}
 + (void) initialize;
 + (id) defaultGlyphGenerator;
 + (id) sharedGlyphGenerator;

 - (void) generateGlyphsForGlyphStorage:(id)adesiredNumberOfCharacters:(unsigned long long)bglyphIndex:(^Q)ccharacterIndex:(^Q)d;


@end
