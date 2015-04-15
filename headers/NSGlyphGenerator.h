
@interface NSGlyphGenerator : NSObject {

}
 + (void) initialize;
 + (id) defaultGlyphGenerator;
 + (id) sharedGlyphGenerator;

 - (void) generateGlyphsForGlyphStorage:(id)a desiredNumberOfCharacters:(unsigned long long)b glyphIndex:(^Q)c characterIndex:(^Q)d ;


@end
