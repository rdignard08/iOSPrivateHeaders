
@interface NSGlyphGenerator : NSObject {

}
 + (void) initialize;
 + (id) defaultGlyphGenerator;
 + (id) sharedGlyphGenerator;

 - (void) generateGlyphsForGlyphStorage:(id)adesiredNumberOfCharacters:(Q)bglyphIndex:(^Q)ccharacterIndex:(^Q)d;


@end
