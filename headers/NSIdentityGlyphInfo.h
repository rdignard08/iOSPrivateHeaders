
@interface NSIdentityGlyphInfo : NSGlyphInfo {

    NSFont* _font;
    unsigned int _glyph;
}
 + (void) initialize;
 + (id) glyphInfoWithGlyph:(unsigned int)aforFont:(id)bbaseString:(id)c;

 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (unsigned int) _glyphForFont:(id)a baseString:(id)b ;
 - (id) initWithGlyph:(unsigned int)a forFont:(id)b baseString:(id)c ;
 - (id) _font;
 - (unsigned int) _glyph;


@end
